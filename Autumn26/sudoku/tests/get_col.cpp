#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>


int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    // write your code here

    int rowlen = std::sqrt(in.size()) ;
    
    //the indexes of our desired positions are of form Twod_to_oned(i,c,rowlen)
    //for i between 0 and rowlen-1 , inclusive
    std::vector<int> col_index_vector ;
    for (int i = 0 ; i < rowlen ; i++){
        col_index_vector.push_back(twod_to_oned(i,c,rowlen)) ;
    }
    
    //clear the output before writing data
    out.clear() ;

    //writing the elements of which we stored the index
    for (int i = 0 ; i<col_index_vector.size() ; i++){
        out.push_back(in[col_index_vector[i]]) ;
    }

    return; 

}

int main() {
    std::vector<int> out ;
    std::vector<int> v1{1, 2, 3, 4, 4, 1, 2, 76, 4, 4, 4, 1, 9, 4, 1, -7} ;
    std::vector<int> test1 {1, 4, 4, 9} ;
    get_col(0,v1,out);
    for (int i  = 0 ; i<out.size() ; i++){
        if (v1[i] = test1[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;
}