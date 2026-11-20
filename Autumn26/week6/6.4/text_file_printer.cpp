#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> read_function (std::string address ){

    std::vector<std::string> wordvector ;
    std::fstream file ;
    file.open(address) ;

    std::string tmp ;
    while (file >> tmp){
        wordvector.push_back (tmp);
    }

    return wordvector ;
}

void print_fucntion(std::vector<std::string> wordvector){
    for ( int i = 0 ; i < wordvector.size() ; i++){
        std::cout<<wordvector[i]<<" " ;
    }
}

int main (int argc , char* argv[]){

    std::vector<std::string> words;
    words = read_function(argv[1]);
    print_fucntion(words);

}