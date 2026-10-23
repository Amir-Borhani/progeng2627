#include <iostream>

double Max(double a , double b){
    if (a>b){
        return a ;
    } else {
        return b ;
    }
}

int main (){
    double n1 , n2 ;
    std::cout << "please enter your 2 numbers : " << std::endl ;
    std::cin >> n1 >> n2 ;

    std::cout << "maximum of the two is : " << Max(n1 , n2) << std::endl ;
}