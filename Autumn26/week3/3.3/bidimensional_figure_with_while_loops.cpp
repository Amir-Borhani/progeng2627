#include <iostream>

int main () {
    int n ;
    std::cout << "please enter n : " << std::endl;
    std::cin>>n;

    int d1 =0 , d2 =0;
    while (d1 < n){
        while (d2<n){
            std::cout<<"* ";
            d2++;
        }
        std::cout<<std::endl;
        d2=0;
        d1++;
    }
}