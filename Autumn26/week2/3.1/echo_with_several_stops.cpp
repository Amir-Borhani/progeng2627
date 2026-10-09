#include <iostream>
#include <string>

int main() {
    std::string txt;

    std::cout << "Say something : "<< std::endl;
    std::cin >> txt;

    while ((txt != "STOP") && (txt != "stop")){
        std::cout << "You Said : " << txt << std::endl;
        std::cin >> txt;
    }
}