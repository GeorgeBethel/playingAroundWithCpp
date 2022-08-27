#include<iostream>

/**
 * enums are ise when you want represent related names integers 
 * 
**/

/** An example of enum class also known as scoped enum class.

If Month is an enum class, neither condition will compile. If monday is an enumerator of a “plain” enum, rather than an
enum class, the comparison of a month to Monday would succeed, most likely with undesirable results.

**/
enum class Month
{
    January = 1, feb, march, april, may, june, july, august, september, october, november, dec
};

//non enum class. Plain enum


// enum plain
// {
//     January = 1, february, march, april, may, june, july, august, september, october, november, december
// };

void Enum(Month x){

   if(int(x) == 2) std::cout<<"comparison worked"<<std::endl;

}

// this is an operator for class type enum. This function created now can be used to increment the enumerators. 

// Other data types can be used also (+, -, /, * etc)

Month operator++(Month& m){

  m = (m == Month::dec) ? Month::January : Month(int(m) + 1);  // ?: is an arithmetic if

  return m;

}

Month operator--(Month& m){

  m = (m == Month::January) ? Month::dec : Month(int(m) - 1);  // ?: is an arithmetic if

  return m;

}

int main(){

Month m = Month::july; // m is now an enum of type Month

--m;  

//std::cout<<"Compare: "<< m == 7<<std::endl;

// plain m2 = february;  // OK
// plain m3 = plain::april; // OK
//std::cout<<"plain enum Month: "<< 7 == march<<std::endl;
std::cout<<"scoped enum Month: "<<int(m)<<std::endl;

Enum(Month::feb);

return 0;


}

