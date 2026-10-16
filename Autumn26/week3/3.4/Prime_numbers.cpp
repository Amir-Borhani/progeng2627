// the more effective version
#include <iostream>
#include <cmath>

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    int cf = 2;


    while ( (found_factor==false) && (cf <= std::floor(std::sqrt(n)))){

        if( (n % cf) == 0){ // n can be divided by cf...

            std::cout << "factor is : "<< cf <<std::endl;
            std::cout << n << "%" << cf << " = " << cf%n <<std::endl;
            found_factor = true;
            //...it means we have found a factor!
        cf++;

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}