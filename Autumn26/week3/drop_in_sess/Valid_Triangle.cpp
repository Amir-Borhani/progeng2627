#include <iostream>
#include <string>
#include <cmath>

int main(){

    double a , b , c , p , area , s;

    std::cout << "please enter the lenght of the 1st side : " << std::endl;
    std::cin >> a;

    std::cout << "please enter the lenght of the 2nd side : " << std::endl;
    std::cin >> b;

    std::cout << "please enter the lenght of the 3rd side : " << std::endl;
    std::cin >> c;

    if ((a+b>c) && (a+c>b) && (b+c>a)){


        //identify the type
        if ((a==b) && (a==c)){
            std::cout << "this is a equilateral triangle" << std::endl;
        } else if ((a==b)||(a==c)||(b==c)){
            std::cout << "this is a isosceles triangle" << std::endl;
        } else {
            std::cout << "this is a scalene triangle" << std::endl;
        }

        p = a+b+c;
        s = p/2;
        std::cout << "the perimeter is : "<< p <<std::endl;

        area = std::sqrt((s)*(s-a)*(s-b)*(s-c));
        std::cout << "the area is : " << area << std::endl;
    } else {
        std::cout << "Not a triangle" << std::endl;
    }
    
}