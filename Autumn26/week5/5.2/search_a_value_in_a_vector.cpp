#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0 ; i<vin.size() ; i++){
        if (vin[i]==n){
            return i ;
        }
    }

    return -1 ;
}

int main(){
    std::vector<int> v1{};
    std::cout<<(search_vector(1,v1)==-1)<<" ";

    std::vector<int> v2{1,2,3,4,5};
    std::cout<<(search_vector(6,v2)== -1)<<" ";

    std::vector<int> v3{-1,0,1,2,3};
    std::cout<<(search_vector(2,v3)==3)<<" ";
}