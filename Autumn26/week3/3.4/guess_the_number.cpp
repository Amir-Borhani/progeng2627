#include <iostream>
#include <cmath>
#include <string>

int main () {
    int n , rangeL , rangeH , guess ;
    std::string response = "" ;

    std::cout << "please input the lower bound of guessing range (inclusive) : " << std::endl;
    std::cin >> rangeL;
    std::cout << "please input the upper bound of guessing range (inclusive) : " << std::endl;
    std::cin >> rangeH ;

    std::cout << std::endl;
    std::cout << "please input > if guess is higher than your number " <<std::endl;
    std::cout << "input < if guess is lower than your number " <<std::endl;
    std::cout << "and = if guess is right " <<std::endl;
    std::cout<<std::endl;


    while (response != "="){
        
        //guesses the midway between range
        guess = rangeL + (rangeH - rangeL)/2 ;
        std::cout << "guess is : " << guess << std::endl;
        std::cin >> response ;

        if (response == ">" ){
            //chooses lower half excluding the guess number
            rangeH = guess - 1 ;

        } else if ( response == "<") {

            //chooses the higher half excluding the guess number
            rangeL = guess + 1;
            
        }
    }

    std::cout << "your number is : " << guess << std::endl;
    

}