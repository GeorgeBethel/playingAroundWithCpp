#include<iostream>
using namespace std;

/***
 *  a pointer is simply a data type that can hold location where a variable value is located
 *  in int* pointervar, pointervar points to an location in memory that stores an integer.
 * 
 **/

class Dog{

      public:
        Dog(string name,string sound);
        string name;
        string sound;
        string getName();
        string getSound();


};

Dog::Dog(string name, string sound)
    :name{name}, sound{sound}

    {};

string Dog::getName(){return name;};

string Dog::getSound(){return sound;};



int main(int argc, const char** argv) {

    int var = 40;

    int* pointer2var = &var;  // pointer2var is now holding the location of var but not the value

    std::cout << "position of var in memory: " << pointer2var<<std::endl; 

    std::cout << "actual value of var: " << var<<std::endl; 

    // changing the value of var from the memory

    *pointer2var = 100; // changes the value of var to 100 putting an asteric before the variable returns the value stored in the location

    std::cout << "position of var in memory: " << pointer2var<<std::endl; 

    std::cout << "new value of var: " << var<<std::endl; 

    double* dpointer = new double(100.5);  // the new keyword allocated a free memory for the created double

    std::cout << "value of dpointer: " << *dpointer<<std::endl; 

    delete dpointer;

    std::cout << "value of dpointer after been deleted -> points to nothing: " << *dpointer<<std::endl;

    std::cout << "location hold no value but memory alocated is still not free: " << dpointer<<std::endl;  

    dpointer = nullptr;

    std::cout << "memory is now freed free: " << dpointer<<std::endl; 


    // declaring pointers to user defined types

    Dog* dog1 = new Dog("Bingo", "wof! wof!");
    Dog* dog2 = new Dog("German Shepherd", "Grrr gwof!");

    std::cout << "dog1 name: " << dog1 ->getName()<<std::endl; // dereferencing the pointer using ->

    std::cout << "dog1 sound: " << dog1 ->getSound()<<std::endl;

    //another way of doing it

    std::cout << "dog2 name: " << (*dog2).getName()<<std::endl;  // dereferencing the pointer using -> we put this in parentesis because the "." operator has more precedence over the * operator

    std::cout << "dog2 sound: " << (*dog2).getSound()<<std::endl;

   
    return 0;
}
