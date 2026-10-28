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

int euler_totient(int n){

    int phi = 0;
    for (int i = 1; i < n+1 ; i++){
        if (gcd(n,i)==1){
            phi+=1;
        }
    }
    return phi ;
}

int main (){

    std::cout << (euler_totient(9) == 6) << std::endl;
    std::cout << (euler_totient(12) == 4) << std::endl;
    std::cout << (euler_totient(17) == 16) << std::endl;
    std::cout << (euler_totient(13) == 12) << std::endl;
    std::cout << (euler_totient(1) == 1) << std::endl;
    std::cout << (euler_totient(6) == 2) << std::endl;

}