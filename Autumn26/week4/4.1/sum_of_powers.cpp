#include <iostream>
#include <cmath>

double Sum_Of_Powers(double x, int n){
    double result = 0;

    for ( int i = 1 ; i < (n+1) ; i++){
        result += std::pow(x , i);
    }
     
    return result ;
}

int main(){

    int x , n ;
    std::cout << "please enter x and n : " << std::endl ;
    std::cin >> x >> n ;

    std::cout << "sum of powers is : " << Sum_Of_Powers(x,n) << std::endl;


}
