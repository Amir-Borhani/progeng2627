#include <iostream>

int gcd(int a, int b){
    
    //making sure a is the bigger number
    if (a<b){
        int temp = a; a = b; b = temp;
    }

    while ((a%b)!= 0) {
        int r = a%b ;
        a = b ;
        b = r ;
    }
    return b;
}

int main(){
    std::cout<<(gcd(1071 , 462)==21)<<std::endl ;
    std::cout << (gcd(48, 18) == 6) << std::endl;
    std::cout << (gcd(17, 13) == 1) << std::endl;
    std::cout << (gcd(25, 25) == 25) << std::endl;
    std::cout << (gcd(1, 15) == 1) << std::endl;
}