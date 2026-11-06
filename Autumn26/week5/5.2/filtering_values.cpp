#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear() ;
    for (int i = 0 ; i < vin.size() ; i++){
        if (vin[i] > t){
            vout.push_back(vin[i]) ;
        }
    }
}

int main() {
    std::vector <double> v1 {-99,-1,-0.1, 0, 1,2,99} ;
    std::vector <double> v2 ;
    double t = -0.05 ;
    filter_v(v1,t,v2) ;
    filter_v(v1,t,v2) ;

    for (int i = 0 ;i <v2.size() ; i++){
        std::cout<<v2[i]<<" " ;
    }

}