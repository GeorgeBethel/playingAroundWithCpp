#include<iostream>
#include<string>
using namespace std;

string TypeOf(int) {return "int";}
string TypeOf(const string&) {return "string";}

namespace fun
{
    int GetMeaningOfLife(void){return 42;}

}//fun

namespace boring{
int GetMeaningOfLife(void){return 0;}

}

int main(){
    
    cout <<TypeOf(1)<< std::endl;
    cout <<TypeOf("hello")<< std::endl;

    cout <<fun::GetMeaningOfLife()<< std::endl;
    cout <<boring::GetMeaningOfLife()<< std::endl;
    

    return 0;
}

