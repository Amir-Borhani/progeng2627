#include <iostream>

int main(){
    double celsius , fahrenheit;

    std::cout << "please enter the temperature in Celsius : " << std::endl;
    std::cin >> celsius;

    fahrenheit = 1.8 * (celsius) + 32 ;

    std::cout << "the equivalent temperature is : "<< fahrenheit << " fahrenheit " << std::endl;

}