#include <iostream>

double Max (double a , double b , double c){
    if ((a >= b)&&(a >= c)) {
        return a ;
    } else {
        if (b>=c){
            return b ;
        } else {
            return c;
        }
    }
}

int main (){
    std::cout << "test case (5,4,3) : " << (Max(5,4,3)==5) << std::endl;
    std::cout << "test case (4,5,3) : " << (Max(4,5,3)==5) << std::endl;
    std::cout << "test case (4,3,5) : " << (Max(4,3,5)==5) << std::endl;
    std::cout << "test case (4,5,5) : " << (Max(4,5,5)==5) << std::endl;

}