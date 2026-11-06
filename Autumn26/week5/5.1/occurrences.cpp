#include <iostream>
#include <vector>

int main(){

    int n ;
    int s;

    std::vector<int> numbers;
    std::cout<<"please input n : "; std::cin>>n;std::cout<<std::endl;
    

    for (int i = 0;i<n;i++){
        int temp = 0 ;
        std::cout<<"please enter a number : ";
        std::cin>> temp ;
        std::cout<<std::endl;
        numbers.push_back(temp);
    }

    std::cout<<"please input s : ";std::cin>>s;std::cout<<std::endl;

    int counter = 0 ;
    for (int i = 0 ; i<n ; i++){
        if(numbers[i]==s){
            counter++;
        }
    }
    
    std::cout<<"there are "<<counter<<" occurrences of "<<s<<std::endl;



}