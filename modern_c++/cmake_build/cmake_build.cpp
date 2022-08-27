#include "cmake_build.hpp"
#include<iostream>

  void Sqr()
  
  {

    std::cout << "the square of 4 is: " << 4*4 << std::endl;

  }

  void TestNameSpace::sqr(int x){

   std::cout<<"the square of x is: "<< x*x <<std::endl;


  }

  void power::mult(int x, int y){

    std::cout<<"x multiplied by y is: "<<x*y<<std::endl;

  }
