#include "cmake_build.hpp"
#include<iostream>
using namespace TestNameSpace;
using namespace power;

/*

Namespaces are used in other to avoid collision ehen you have similar names

to declare an namespace, you use the keyword namespace

namespace namespaceName{

   data definition
   functions definition

}

to refereence a namespace, we use the namespace resultion ::

namespaces can also be added to the header file like it is been added here and 
then included in the implementation

to be able to use the namespaces in your heade file, you have write an 
implemention and import it into
the main function using namespace "namespace name without tyhe quotes" 

*/

int main()

{


  Sqr();
  sqr(8);
  mult(4,8);

  return 0;



}
