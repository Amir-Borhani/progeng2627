#include <iostream>

int main(){
    int n;

    std::cout << "say a number : "<<std::endl;
    std::cin >> n;

    while ( (n > -11) && ( n < 11)){

        std::cout <<"what you said was : "<< n << std::endl;
        std::cin >> n;

    }
}