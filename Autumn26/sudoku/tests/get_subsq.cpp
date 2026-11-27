#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>


int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    // write your code here


    //if our sudoku is nXn then our sequence is of lenght n^2
    int n = std::sqrt(in.size());

    //if our sudoku is nxn then we have n total subsqaures
    //each of size sqrt(n)
    //arranged in a sqrt(n) X sqrt(n) grid 
    //indexed first from left to right, and then top to bottom , starting from 0
    int sqrtn = std::sqrt(n) ;
    
    //first we convert the index of our subsquare to a 2d index 
    // so we can find its position
    int subsq_r = subs/sqrtn ;
    int subsq_c = subs%sqrtn ;
    //notice that we basically made the reverse function of Twod_to_oned()

    //if a subsqaure is in position (r , c)
    //then the row index of its top left element is (r X sqrtn , c X sqrtn )
    //there for our desired elemts are in positions (r x sqrtn + i , c x sqrtn + j)
    //for i , j between 0 and sqrt(n) -1 , inclusive

    std::vector<int> subsq_index_vector ;

    for ( int i = 0 ; i < sqrtn ; i++){
        for ( int j = 0 ; j < sqrtn ; j++)
            subsq_index_vector.push_back( twod_to_oned( subsq_r * sqrtn + i , subsq_c*sqrtn + j , n ));
    }

    //now we output the elements of which we stored the index
    out.clear() ;

    for(int i = 0 ; i < subsq_index_vector.size() ; i++){

        out.push_back(in[subsq_index_vector[i]]) ;
    }

    return ;


}

int main() {
    std::vector<int> out ;
    std::vector<int> v1{1, 2, 3, 4, 4, 1, 2, 76, 4, 4, 4, 1, 9, 4, 1, -7} ;
    
    std::vector<int> test0 {1, 2, 4, 1} ;

    get_subsq(0,v1,out);
    for (int i  = 0 ; i<out.size() ; i++){
        if (v1[i] = test0[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;

    std::vector<int> test1 {3, 4, 2, 76} ;

    get_subsq(1,v1,out);
    for (int i  = 0 ; i<out.size() ; i++){
        if (v1[i] = test1[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;

    std::vector<int> test2 {4, 4, 9, 4} ;

    get_subsq(2,v1,out);
    for (int i  = 0 ; i<out.size() ; i++){
        if (v1[i] = test2[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;
    

    std::vector<int> test3 {4, 1, 1, -7} ;

    get_subsq(3,v1,out);
    for (int i  = 0 ; i<out.size() ; i++){
        if (v1[i] = test3[i]){
            std::cout<<"1 " ;
        }
    }
    std::cout<<std::endl;

    
}