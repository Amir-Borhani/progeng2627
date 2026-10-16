#include <iostream>

int main(){

    int n1,a,n2,b,q,r;
    std::cout << "please enter n1 : " <<std::endl;
    std::cin>>n1;
    std::cout << "please enter n2 : " << std::endl;
    std::cin>>n2;

    //seperate input from working variable cause i need them later
    a=n1;
    b=n2;
    q=0;
    r=0;

    while (a >= b){
        a = a - b;
        q = q + 1;
    }

    //what remains of a is by definition reminder
    r=a;

    std::cout << n1 << " = " << n2 << " * " << q << " + " << r << std::endl;
}