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

    //the indexes of our desired positions are of form Twod_to_oned(r,i,rowlen)
    //for i between 0 and rowlen-1 , inclusive
    std::vector<int> row_index_vector ;
    for (int i = 0 ; i < rowlen ; i++){
        row_index_vector.push_back(twod_to_oned(r,i,rowlen)) ;
    }
    
    //clear the output before writing data
    out.clear() ;

    //writing the elements of which we stored the index
    for (int i = 0 ; i<row_index_vector.size() ; i++){
        out.push_back(in[row_index_vector[i]]) ;
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
