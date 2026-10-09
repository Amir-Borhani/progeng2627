#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    int temp100;
    std::string unit_in, unit_out;

    std::cin >> temp_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "C" || unit_in == "c"){
        unit_out = "F";
        temp_out = 1.8*(temp_in) + 32;

    }

    else if(unit_in == "F" || unit_in == "f" ){
        unit_out = "C";
        temp_out = (temp_in-32)/1.8 ;
    }
    else{
        valid_unit = false;
    }

    //rounding to 2dp
    //not elegant solution ik
    temp100 = 100*temp_out;
    temp_out = temp100/100.0;


    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}