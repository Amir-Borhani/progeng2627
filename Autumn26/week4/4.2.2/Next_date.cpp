#include <iostream>

bool leap_year(int year){


    bool ly;
    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100

            if( (year%400) == 0){
                // if (also) multiple of 400
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)

            ly = true;

        }
    }
    else{
        // if not multiple of 4
        ly = false ;
    }
    return ly;
    
    // we *do not print* anything in the function
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    //leap check
    if ((d1==28)&&(m1==2)){
        if (leap_year(y1)){
            d2 = 29 ; m2 = 2 ; y2 = y1 ;
        } else {
            d2 = 1 ; m2 = 3 ; y2 = y1 ;
        }
    

    } else if (d1==29 && m1==2) {
        d2=1;m2=3;y2=y1;

    // 30-day months check
    } else if ((d1==30)&&((m1==4)||(m1==6)||(m1==9)||(m1==11))){
            d1=1;m2=m1+1;y2=y1;

    //new year check
    } else if ((d1==31 || m1 == 12)){
        d2=1;m2=1;y2=y1+1;
    
    //31-day month check
    } else if ((d1==31)){
        d2=1;m2=m1+1;y2=y1;
        
    //every other date
    } else {
        d2=d1+1 ; m2=m1 ; y2=y1 ;
    }


    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int d,m,y;
    next_date(31,1,2024,d,m,y) ;
    std::cout << "next date of 31/1/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(31,3,2024,d,m,y) ;
    std::cout << "next date of 31/3/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(30,4,2024,d,m,y) ;
    std::cout << "next date of 31/4/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(31,5,2024,d,m,y) ;
    std::cout << "next date of 31/5/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(30,6,2024,d,m,y) ;
    std::cout << "next date of 31/6/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(31,7,2024,d,m,y) ;
    std::cout << "next date of 31/7/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(31,8,2024,d,m,y) ;
    std::cout << "next date of 31/8/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(30,9,2024,d,m,y) ;
    std::cout << "next date of 31/9/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(31,10,2024,d,m,y) ;
    std::cout << "next date of 31/10/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(30,11,2024,d,m,y) ;
    std::cout << "next date of 31/11/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(31,12,2024,d,m,y) ;
    std::cout << "next date of 31/12/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(28,2,2024,d,m,y) ;
    std::cout << "next date of 31/1/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(29,2,2024,d,m,y) ;
    std::cout << "next date of 31/1/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;
    next_date(11,11,2024,d,m,y) ;
    std::cout << "next date of 11/11/2024 is : " << d<<"/"<<m<<"/"<<y<<std::endl;

}