#include<iostream>


//struct definition

namespace Date{

struct StructDate{


   int dd;

   int mm;

   int yy;

   StructDate(int dd, int mm, int yy){

    //Something is wrong with this conditions. fix later

    if (mm == 2 && dd > 28){

      std::cout << "Invalid day for february"<< std::endl;

    }

    else if(yy > 2022){

      std::cout << "Invalid year"<< std::endl;

    }

    else if(dd <= 0){


     std::cout << "Day canno be zero or less than zero"<< std::endl;

    }

    else{

        yy = yy;
        mm = mm;
        dd = dd;
    }

   }

   void printDate(){
    
       std::cout<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
   
   }

};

}


// define a member function outside the struct



// class definition

class date{

     private:
        int d;
        int m;
        int y;

    public:
        date(int d, int m, int y){

            d = d;
            m = m;
            y = m;

    }
        int month(){return m;};
        int day(){return d;};
        int year(){return y;};


};

int main(){


   //Date::StructDate today(23,7,2022);
   date tday(20,5,2022);
   //tday.month;

    int m = tday.month();
    std::cout<<"accessing the month value: "<<m<<std::endl;

    return 0;

}