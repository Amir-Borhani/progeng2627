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

int main(){
    std::vector<int> v1{3 ,2, 5} ;
    std::cout << (mfind(2,v1) == 1 ) << std::endl ;
    std::vector<int> v2{3 ,1, 2} ;
    std::cout << (mfind(-6,v2) == -1 ) << std::endl ;
    std::vector<int> v3{1 ,1, -12 , 1 ,5} ;
    std::cout << (mfind(5,v3) == 4 ) << std::endl ;
}