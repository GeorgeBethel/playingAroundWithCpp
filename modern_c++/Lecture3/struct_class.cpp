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


enum class Month { 

January = 1, february, march, april, may, june, july, august, september, october, november, december

};

// class definition

class year{

    private:
        static const int min = 1800;
        static const int max = 2022;
        int yr;

    public:
        int get_yr(){return yr;}
        class Invalid_yr{};
        year(int yr)
        :yr{yr}

        {

           if(yr > max || yr <= min) throw Invalid_yr{};

        };


};

class date{

     private:
        int d;
        Month m;
        year y;
        bool is_valid();

    public:
        date(int d, Month m, year y);
        Month month(){return m;}
        int day(){return d;}
        int add_day(int dt){return d + dt;}
        class Invalid{};

};

date::date(int d, Month m, year y)
    :d{d}, m{m}, y{y}

{

  if (int(m) < 1 || 12 < int(m)) throw Invalid{};
 

};

// bool date::is_valid(){

//     if (int(m) < 1 || 12 < int(m)) return false;
// }

void error(std::string s){

throw std::runtime_error(s);

}

int main(){


  // Date::StructDate today(23,7,2022);
   
   //tday.month;
   
   try
   {


    date tday(9, Month::february, year{2020});
    
    int day = tday.add_day(2);

    std::cout << day << std::endl;
    
   }

   catch(date::Invalid)
   {
    error("invalid date");

   }
   


    return 0;

}