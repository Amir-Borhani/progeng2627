#include <iostream>

void Perimeter_and_area(double side1 , double side2 , double& perimeter , double& area){
    area = side1*side2 ;
    perimeter = 2*(side1+side2) ;
}

int main() {
    double p , s ;
    Perimeter_and_area(2,3, p,s) ;
    std::cout << "area of a 2 by 3 rectangle is : "<<s<<" and its perimeter is : "<<p<<std::endl;
}