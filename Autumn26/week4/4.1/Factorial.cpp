#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact;
    // variable that will store the result

   fact = 1 ;
    for (int i = 1 ; i < in+1 ; i++){
        fact = fact * i;
    }

    return fact;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}