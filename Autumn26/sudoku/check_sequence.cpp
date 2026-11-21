#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

int mfind(int n, const std::vector<int>& v){
    // write your code here

    for ( int i = 0 ; i < v.size() ; i++){
        if (v[i]==n){
            return i ;
        }
    }
    return -1 ;
}

bool check_sequence(const std::vector<int>& v){
    // write your code here

    // i from 1 to v.size() inclusive
    for (int i = 1 ; i < v.size() + 1; i++){

        //if it doesnt find a number it immediately returns false and exits
        if ( mfind(i , v) == -1){
            return false ;
        }

    }

    //if program reaches this point 
    //it means that it found all integers from 1 to v.size() 
    //and must return true
    return true ;
}

int main(){
    std::vector<int> v1{3 ,2, 5} ;
    std::cout << (check_sequence(v1) == false ) << std::endl ;
    std::vector<int> v2{3 ,1, 2} ;
    std::cout << (check_sequence(v2) == true ) << std::endl ;
    std::vector<int> v3{1 ,1, -12 , 1 ,5} ;
    std::cout << (check_sequence(v3) == false ) << std::endl ;
}