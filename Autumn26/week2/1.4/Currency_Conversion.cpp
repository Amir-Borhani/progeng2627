#include <iostream>

int main(){
    double pounds , exchange_rate , euros;

    std::cout << "please enter the amount of money in british pounds : " << std::endl;
    std::cin >> pounds;
    
    std::cout << "please enter the current exchange rate to euros : " << std::endl;
    std::cin >> exchange_rate;

    euros = pounds*exchange_rate;

    std::cout << "the equivalent amount is : "<< euros << " euros " << std::endl;

}