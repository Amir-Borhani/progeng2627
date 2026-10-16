#include <iostream>

int main(){
    double length , width , area , perimeter;

    std::cout << "please enter the rectangle lenght : " << std::endl;
    std::cin >> length;
    
    std::cout << "please enter the rectangle lenght : " << std::endl;
    std::cin >> width;

    area = width*length;
    perimeter = 2*(width+length);

    std::cout << "Area of rectangle is : "<< area << std::endl;
    std::cout << "Perimeter of rectangle is : " << perimeter << std::endl;

}