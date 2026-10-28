#include <iostream>

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

int main (){
    int d = 0;
    std::cout<<((totient_sum(30,d)==15)&&(d==4))<<std::endl;
    std::cout<<((totient_sum(1,d)==0)&&(d==0))<<std::endl;

}