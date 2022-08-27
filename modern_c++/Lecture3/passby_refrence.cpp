#include<iostream>

int RetReference(int x){

    static auto num = 2; // gets stored in memory
    //auto num = 2; gets destroyed it goes out of scope 
    num++;
    std::cout<<"num is: "<<num<<std::endl;
    
    return x;
}


int main() {

    auto y = RetReference(6);
    std::cout<<"value is: "<<y<<std::endl;
    RetReference(6);
    RetReference(6);
    return 0;
}