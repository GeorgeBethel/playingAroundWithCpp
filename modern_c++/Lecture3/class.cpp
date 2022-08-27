#include<iostream>
using namespace std;

class Date{

    private:
        int d;
        int m;
        int y;
        bool is_invalid();

    public:
        class invalid{};
        Date(int d, int m, int y);
        int month(){return m;}
        void add_month(int m){m += m;}

};

Date::Date(int d, int m, int y)
    :d{d},m{m},y{y}

    {

    std::cout<<"I got here"<<std::endl;

  if(!is_invalid()) throw invalid{};

    }

bool Date::is_invalid(){

    if(m < 1 || 12 < m) return false;

};


// function to create date

void date_try(){

try

{
    Date today(3,8,2022);
    std::cout<<"month: "<<today.month()<<std::endl;


}

catch(Date::invalid)

{
    "invalid date";
}



};

void error(std::string s)

{

  throw std::runtime_error (s);

}

//main class

int main(){

    
  date_try();
  
  return 0;

}

