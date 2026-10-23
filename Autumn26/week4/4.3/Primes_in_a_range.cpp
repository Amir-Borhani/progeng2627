#include <iostream>
#include <cmath>

bool Is_Prime(int n) {
    int cf = 2;
    while (cf <= std::floor(std::sqrt(n))){
        if( (n % cf) == 0){ // n can be divided by cf...
            return false ;
        }
    cf++;
    }
    return true ;
}

int main(){
    int n1 , n2 ;
    std::cout<<"please enter two numbers for your range : "<<std::endl;
    std::cin>>n1>>n2;

    for (int i = n1 ; i < (n2+1) ; i++){
        if (Is_Prime(i)){
            std::cout<< i <<" " ;
        }
    }
}