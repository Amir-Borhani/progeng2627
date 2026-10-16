#include <iostream>

int main () {
    int n , factorial;
    std::cout << "please enter n : " << std::endl;
    std::cin >> n ;
    factorial = 1 ;
    for (int i = 1 ; i < n+1 ; i++){
        factorial = factorial * i;
    }

    std::cout << n << "! = " << factorial << std::endl;


}