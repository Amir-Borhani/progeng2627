#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <cmath>
#include <algorithm>


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

int main(){
    
    std::pair<int , int> C1;
    std::pair<int, int> C2;

    std::cout<<"please input the current X coordinates : "<<std::endl;
    std::cin >> C1.first;
    std::cout<<"please input the current y coordinates : "<<std::endl;
    std::cin >> C1.second;

    std::cout << "please enter the desired x coordinates : "<<std::endl;
    std::cin>>C2.first;
    std::cout << "please enter the desired y coordinates : "<<std::endl;
    std::cin>>C2.second;

    


    if (move_validity (C1 , C2))
    {
        std::cout<<"move is valid"<<std::endl;
    } else {
        std::cout << "move is not valid" << std::endl;
    }

}
