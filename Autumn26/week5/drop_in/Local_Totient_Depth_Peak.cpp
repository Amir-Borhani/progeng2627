#include <iostream>
#include <vector>

int gcd(int a, int b){
    
    //making sure a is the bigger number
    if (a<b){
        int temp = a; a = b; b = temp;
    }

    while ((a%b)!= 0) {
        int r = a%b ;
        a = b ;
        b = r ;
    }
    return b;
}

int euler_totient(int n){

    int phi = 0;
    for (int i = 1; i < n+1 ; i++){
        if (gcd(n,i)==1){
            phi+=1;
        }
    }
    return phi ;
}


int totient_sum(int n, int& depth){

    int sum = 0 ;
    int count = 0 ;
    while (n!=1){
        n = euler_totient(n);
        sum+=n;
        count+=1;
    }
    depth = count;
    return sum;
}

std::vector<int> Local_Totient_Depth_Peak(int lower_limit , int higher_limit){

    std::vector<int> depth;
    std::vector<bool> peak;
    std::vector<double> peak_strenght;
    std::vector<int> results;
    
    for(int i = lower_limit ; i < higher_limit + 1 ; i++){
        int d=0 ;
        totient_sum(i , d);
        depth.push_back(d);
        peak.push_back(false);
        peak_strenght.push_back(0);
    }


    for(int i = 1 ; i < higher_limit - lower_limit ; i++){
        if ((depth[i]>depth[i-1])&&(depth[i]>depth[i+1])){
            peak[i]=true;
            peak_strenght[i]= ((depth[i]-depth[i-1])+(depth[i]-depth[i+1]))/2.0 ;
        }
    }


    int greatest_strenght_index = 0;
    for (int i = 1 ; i < higher_limit-lower_limit;i++ ){
        if (peak_strenght[i]>peak_strenght[greatest_strenght_index]){
            greatest_strenght_index = i ;
        }
    }


    if (greatest_strenght_index>0){
    results.push_back(greatest_strenght_index+lower_limit);
    results.push_back(depth[greatest_strenght_index-1]);
    results.push_back( depth[greatest_strenght_index]);
    results.push_back(depth[greatest_strenght_index+1]);
    } else {
    results.push_back(0);
    results.push_back(-1);
    results.push_back(-1);
    results.push_back(-1);
    }

    return results ;
    
}


int main(){

    std::cout<<(Local_Totient_Depth_Peak(14,20)[0] == 17) ;
    std::cout<<(Local_Totient_Depth_Peak(14,20)[1] == 4) ;
    std::cout<<(Local_Totient_Depth_Peak(14,20)[2] == 5) ;
    std::cout<<(Local_Totient_Depth_Peak(14,20)[3] == 3) ;
    std::cout<<(Local_Totient_Depth_Peak(14,17)[0] == 0) ;
    std::cout<<(Local_Totient_Depth_Peak(14,17)[1] == -1) ;
    std::cout<<(Local_Totient_Depth_Peak(14,17)[2] == -1) ;
    std::cout<<(Local_Totient_Depth_Peak(14,17)[3] == -1) ;
    

}