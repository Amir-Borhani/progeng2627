#include <iostream>

int main(){

    double x , sum;
    int n , i;
    i=0;
    sum=0;

    std::cout << "enter first number : " << std::endl;
    std::cin >> x;
    std::cout << "enter second number : " << std::endl;
    std::cin >> n;

    while (i < n) {
        sum = sum + x;
        i = i + 1;
    }
    std::cout << x << " * "<< n << " = "<<sum<<std::endl;
}