#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>


int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    // write your code here

    //if the sudoku is nxn , then our 1d sequence has n^2 elements
    //therefore row lenght is just sqrt of lenght of our 1d sequence
    int rowlen = std::sqrt(in.size()) ;

    //ensure that the output is clear before operation
    out.clear() ;

    // the first element of our desired row is indexed by twod_to_oned(r, 0 , rowlen)
    // the last element of our desired row is indexed by twod_to_oned(r, rowlen-1 , rowlen) , inclusive
    //we itterate on our 1d vector and add the desired elements
    for ( int i = twod_to_oned(r, 0 , rowlen) ; i<= twod_to_oned(r, rowlen-1 , rowlen) ; i++ ){
        out.push_back(in[i]) ;
    }
    
    return ;
}

int main() {
    std::vector<int> out ;
    std::vector<int> v1{1, 2, 3, 4, 4, 1, 2, 76, 4, 4, 4, 1, 9, 4, 1, -7} ;
    std::vector<int> test1 {1, 2, 3, 4} ;
    get_row(0,v1,out);
    for (int i  = 0 ; i<out.size() ; i++){
        if (v1[i] = test1[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;


    std::vector<int> v2{1, 2, 3, 4, 4, 1, 2, 76, 4, 4, 4, 1, 9, 4, 1, -7} ;
    std::vector<int> test2 {9, 4, 1, -7} ;
    get_row(3,v2,out);

    for (int i  = 0 ; i<out.size() ; i++){
        if (v2[i] = test2[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;
    
}
