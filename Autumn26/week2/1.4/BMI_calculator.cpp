#include <iostream>

int main(){
    double height , height_squared, weight , BMI , roundedBMI;
    int BMI10;

    std::cout << "please enter your height in metres : " << std::endl;
    std::cin >> height;
    
    std::cout << "please enter your weight in kilograms : " << std::endl;
    std::cin >> weight;

    height_squared = height * height;
    BMI = weight/height_squared;

    //rounds BMI to 1 decimal place
    BMI10 = BMI*10;

    //devides to converts back 
    roundedBMI = BMI10/10.0;

    std::cout << "your BMI is : "<< roundedBMI << std::endl;

}