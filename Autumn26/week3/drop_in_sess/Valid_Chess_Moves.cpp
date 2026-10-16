#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <cmath>
#include <algorithm>


int main(){
    
    std::pair<int , int> Cnow;
    std::pair<int, int> Cthen;

    std::cout<<"please input the current X coordinates : "<<std::endl;
    std::cin >> Cnow.first;
    std::cout<<"please input the current y coordinates : "<<std::endl;
    std::cin >> Cnow.second;

    std::vector<std::pair<int , int>> moves;
    std::vector<std::pair<int , int>> valid_moves;
    moves.push_back({Cnow.first + 1,Cnow.second + 2});
    moves.push_back({Cnow.first + 2,Cnow.second + 1});
    moves.push_back({Cnow.first - 1,Cnow.second + 2});
    moves.push_back({Cnow.first - 2,Cnow.second + 1});
    moves.push_back({Cnow.first + 1,Cnow.second - 2});
    moves.push_back({Cnow.first + 2,Cnow.second - 1});
    moves.push_back({Cnow.first - 1,Cnow.second - 2});
    moves.push_back({Cnow.first - 2,Cnow.second - 1});
    
    for (int i; i=0; i < moves.size()){
        if ((moves[i].first > 0) && (moves[i].second > 0) && (moves[i].first < 9) && (moves[i].first < 0)){
            valid_moves.push_back({moves[i].first,moves[i].second});
        }
    }




    // incomplete
}