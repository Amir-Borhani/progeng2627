#include <iostream>

void division(int a , int b , int& q , int& r){
    q = a/b ;
    r = a%b ;
}

int main(){
    int q , r ;
    division(10,3,q,r);
    std::cout<<"10 = "<<q<<"*3 + "<<r<<std::endl;
}