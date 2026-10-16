#include <iostream>

int main () {
    long n , count , max;

    std::cout << "enter number : " << std::endl;
    std::cin >> n;

    count = 0 ;
    max = n ;

    while (n!=1){
        if (n>max){
            max=n;
        }
        std::cout<<n<<" " ;
        if (n%2==0){
            n=n/2;
        } else if (n%2==1){
            n=3*n+1;
        } else {
            std::cout << "ERROR" ;
        }

        count++;
    }
    std::cout<< "1" << std::endl;
    std::cout << "number of steps is : "<< count <<std::endl;
    std::cout << "maximum was : "<<max<<std::endl;

}