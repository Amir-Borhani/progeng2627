#include <iostream>

int main () {
    int n ;
    std::cout << "please enter n : " ;
    std::cin>>n;
    std::cout<<std::endl;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            std::cout << i*j << "\t";
        }
        std::cout << std::endl;
    }
}