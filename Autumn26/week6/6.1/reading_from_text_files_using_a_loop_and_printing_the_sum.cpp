#include <iostream>
#include <fstream>

int main() {
    std::fstream inputfile ;
    inputfile.open("input1.txt") ;
    int tmp = 0 ;
    int Sum = 0 ;

    if (inputfile.is_open()) {


        while(inputfile >> tmp){
            Sum = Sum + tmp ;
        }
        inputfile.close() ;
        std::cout<<"sum of file is : "<< Sum <<std::endl;


    } else {

        std::cout<<"file could not be opened" ;

    }
}