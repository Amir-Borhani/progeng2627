#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>

//from previous drop in ...

bool move_validity (std::pair<int , int> Cnow , std::pair<int , int>Cthen ) {

    bool valid = false;

    //all 8 tiles the knight can land in 1 move
    std::vector<std::pair<int , int>> moves;
    moves.push_back({Cnow.first + 1,Cnow.second + 2});
    moves.push_back({Cnow.first + 2,Cnow.second + 1});
    moves.push_back({Cnow.first - 1,Cnow.second + 2});
    moves.push_back({Cnow.first - 2,Cnow.second + 1});
    moves.push_back({Cnow.first + 1,Cnow.second - 2});
    moves.push_back({Cnow.first + 2,Cnow.second - 1});
    moves.push_back({Cnow.first - 1,Cnow.second - 2});
    moves.push_back({Cnow.first - 2,Cnow.second - 1});
    

    std::vector<std::pair<int , int>> valid_moves;

    //iterates through moves and checks if the destination is inside the board
    for (int i=0; i<moves.size(); i++){
        if ((moves[i].first > 0) && (moves[i].second > 0) && (moves[i].first < 9) && (moves[i].second < 9)){
            valid_moves.push_back({moves[i].first,moves[i].second});
        }
    }

    //checks if the destination is among valid tiles
    for ( int i=0; i<valid_moves.size(); i++){
        if (Cthen == valid_moves[i]){
            valid = true;
        }
    }

    //result
    return valid ;

}

int main (){

    std::vector<std::pair<int , int>> coordinates;
    std::srand(std::time(NULL));

    std::cout<<"you get 3 moves to get the knight to a corner"<<std::endl;

    //two random coordinates between 1-8 as starting position
    coordinates.push_back( { std::rand() % 6 + 2 , std::rand() % 6 + 2 } );

    std::cout << "the initial coordinates is : ";
    std::cout << "(" << coordinates[0].first << "," << coordinates[0].second << ")" << std::endl;

    // bit of optimised logic for the while statement
    // all corners have coordinates that are 1 mod 7
    // (1,1) , (1,8) , (8,1) , (8,8)
    //so if both our coordinates arent 1 mod 7 then we arent in a corner
    while ( ! ( (coordinates.back().first%7 == 1) && (coordinates.back().second%7 == 1 ) || (coordinates.size() > 5) )){

        int tempx=0 , tempy=0 ;

        std::cout << "please enter the next x coordinate : " ;
        std::cin>>tempx ;
        std::cout << "please enter the next y coordinate : " ;
        std::cin>>tempy ;
        std::cout<<std::endl;

        if (move_validity(coordinates.back(),{tempx,tempy})){
            coordinates.push_back({tempx, tempy}) ;

            std::cout<< "move is valid. current coordinates are : " ;
            std::cout<< "(" << coordinates.back().first << " , " << coordinates.back().second << ")" << std::endl;

        } else {

            std::cout<< "move is not valid. try again. current coordinates are : ";
            std::cout<< "(" << coordinates.back().first << " , " << coordinates.back().second << ")" << std::endl;

        }
        
    }

    //once again checks if reached a corner
    if ((coordinates.back().first%7 == 1) && (coordinates.back().second%7 == 1 )){
        std::cout << "congrats, you reached a corner in " << coordinates.size()-1 <<" moves ."<<std::endl;
    } else {
        std::cout<<"you ran out of moves . please try again"<<std::endl;
    }   

}