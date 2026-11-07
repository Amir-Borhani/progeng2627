#include<iostream>
#include<fstream>
#include <vector>
#include <string>

std::vector<std::string> Read_function(std::string address) {
    std::vector<std::string> words ;
    std::fstream textfile ;
    textfile.open(address) ;
    std::string tmp ;
    while (textfile >> tmp){
        words.push_back(tmp) ;
    }
    textfile.close() ;
    return words ;
}

int Counter_function(std::vector<std::string> input , std::string searchword){
    int counter = 0 ;
    for (int i = 0 ; i<input.size() ; i++){
        if (input[i] == searchword){
            counter ++ ;
        }
    }
    return counter ;
}

void Write_function (std::vector<std::string> vin , std::string outaddress){
    std::fstream outputfile ;
    outputfile.open(outaddress);
    for (int i = 0 ; i<vin.size() ; i++ ){
        outputfile << vin[i] << std::endl;
    }
    outputfile.close();
}


int main(){

    std::string textaddress ;
    std::string wordsaddress ;
    std::string outaddress ;
    std::cout << "please input the text file address : ";std::cin>>textaddress;
    std::cout << "please input the words file address : ";std::cin>>wordsaddress;
    std::cout << "please input the output file address : ";std::cin>>outaddress;


    std::vector<std::string> textvector = Read_function(textaddress);
    std::vector<std::string> wordsvector = Read_function(wordsaddress);
    std::vector<int> countvector ;
    std::vector<std::string> outvector ;

    for (int i = 0 ; i < wordsvector.size() ; i++){
        countvector.push_back(Counter_function(textvector , wordsvector[i])) ;
    }

    for (int i = 0 ; i<wordsvector.size() ; i++ ){
        outvector.push_back(wordsvector[i] + " : " + std::to_string(countvector[i]));
    }

    Write_function (outvector , outaddress) ;
    std::cout<<"done" ;
}