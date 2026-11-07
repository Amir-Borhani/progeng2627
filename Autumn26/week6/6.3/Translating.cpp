#include<iostream>
#include<fstream>
#include <vector>

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

void Replacement_function(std::vector<std::string>& vin , std::vector<std::string> term , std::vector<std::string> meaning ){
    
    for (int i = 0 ; i < vin.size() ; i++){ //do replacement on every element of vin

        for (int j = 0 ; j < term.size() ; j++){ //find vin[i] in our terms and replace with meaning
            if (vin[i] == term [j] ){
                vin[i] = meaning[j] ;
            }
        }

    }
}

void Write_function (std::vector<std::string> vin , std::string outaddress){
    std::fstream outputfile ;
    outputfile.open(outaddress);
    for (int i = 0 ; i<vin.size() ; i++ ){
        outputfile << vin[i] << std::endl;
    }
    outputfile.close();
}


int main() {
    std::string textaddress ;
    std::string wordsaddress ;
    std::string outaddress ;
    std::cout << "please input the text file address : ";std::cin>>textaddress;
    std::cout << "please input the translation words file address : ";std::cin>>wordsaddress;
    std::cout << "please input the output file address : ";std::cin>>outaddress;


    std::vector<std::string> textvector = Read_function(textaddress);
    std::vector<std::string> wordsvector = Read_function(wordsaddress);
    std::vector<std::string> term ;
    std::vector<std::string> meaning ;


    for ( int i = 0 ; i < wordsvector.size() ; i++){
        if (i%2 == 0){
            term.push_back(wordsvector[i]);
        } else {
            meaning.push_back(wordsvector[i]);
        }
    }

    Replacement_function(textvector , term , meaning) ;
    Write_function(textvector , outaddress);

    std::cout<<"done" ;

}
