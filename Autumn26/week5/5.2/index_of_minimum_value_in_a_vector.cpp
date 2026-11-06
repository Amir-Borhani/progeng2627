#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>& vin) {
    if (vin.size()==0){
        return -1 ;
    } else {
        int index = 0;
        for (int i = 0 ; i < vin.size() ; i++){
            if (vin[i]<vin[index]){
                index = i ;
            }
        }

        return index ;
    }
}

int main(){
    std::vector<double> v1{2,1,3,4,5} ;
    std::cout<<(min_vector_element(v1)==1)<<" " ;

    std::vector<double> v2{-1,4,-3,4,5} ;
    std::cout<<(min_vector_element(v2)==2)<<" " ;

    std::vector<double> v3{} ;
    std::cout<<(min_vector_element(v3)==-1)<<" " ;

}