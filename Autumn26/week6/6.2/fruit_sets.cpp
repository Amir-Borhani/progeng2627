#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i = 0 ; i< vin.size() ; i++){
        if (vin.at(i)==s){
            return i ;
        }
    }
    return -1 ;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    
    vout = vin1 ;
    for (int i = 0 ; i < vin2.size() ; i++ ){
        if (search_vector(vin2[i],vout) == -1){
            vout.push_back(vin2[i]) ;
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear() ;
    for (int i = 0 ; i < vin1.size() ; i++ ){
        if ((search_vector(vin1[i],vin2) != -1)){
            vout.push_back(vin1[i]) ;
        }
    }
}


int main(){
    std::string txt1 ;
    std::cout<<"please enter the name of 1st file : ";std::cin>>txt1;
    std::string txt2 ;
    std::cout<<"please enter the name of 2nd file : ";std::cin>>txt2;

    std::fstream file1 ;
    file1.open(txt1) ;
    std::fstream file2 ;
    file2.open(txt2);

    std::vector<std::string> shop1;
    std::vector<std::string> shop2 ;
    std::vector<std::string> Union ;
    std::vector<std::string> Intersect ;
    
    if (!file1.is_open()){
        return EXIT_FAILURE ;
    }
    if (!file2.is_open()){
        return EXIT_FAILURE ;
    }

    std::string temp;
    while(file1>>temp){
        shop1.push_back(temp) ;
    }
    while(file2>>temp){
        shop2.push_back(temp);
    }

    intersection_vector(shop1,shop2,Intersect);
    union_vector(shop1,shop2,Union);

    std::fstream Uout ;
    Uout.open("union.txt");

    std::fstream Iout ;
    Iout.open("intersect.txt") ;

    if (!Uout.is_open()){
        return EXIT_FAILURE ;
    }
    if (!Iout.is_open()){
        return EXIT_FAILURE ;
    }

    for (int i = 0 ; i<Intersect.size() ; i++){
        Iout <<Intersect[i]<<std::endl;
    }
    Iout.close();

    for(int i = 0 ; i < Union.size() ; i++){
        Uout << Union[i] << std::endl;
    }
    Uout.close() ;

    std::cout<<"operation successful" ;
}