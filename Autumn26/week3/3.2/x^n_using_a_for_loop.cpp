#include <iostream>

int main(){

    double x, result;
    int n ;

    std::cout << "please enter x : " << std::endl;
    std::cin >> x;
    std::cout << "please enter n : " << std::endl;
    std::cin >> n ;

    result = 1 ;
    for (int i=0;i<n;i++){
        result=result*x;
    }
    std::cout <<x<<"^"<<n <<" = " << result << std::endl;

}