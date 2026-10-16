#include <iostream>
#include <string>

int main(){
    int n;
    double sum=0;
    std::cout << "enter numbers (0 to exit) :" << std::endl;
    std::cin>>n;

    while (n!=0){
        sum = sum + n;
        std::cout << "the sum so far is : " << sum << std::endl;
        std::cin>>n;
    }
}