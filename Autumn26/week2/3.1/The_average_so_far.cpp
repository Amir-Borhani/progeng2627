#include <iostream>
#include <string>

int main(){
    int n;
    double sum=0 , i=0 ;
    std::cout << "enter numbers (0 to exit) :" << std::endl;
    std::cin>>n;

    while (n!=0){
        sum = sum + n;
        i= i + 1;
        std::cout << "the average so far is : " << sum/i << std::endl;
        std::cin>>n;
    }
}