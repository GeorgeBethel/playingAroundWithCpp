#include<iostream>
#include<tuple>


auto TestAuto(){

  return std::make_tuple("tuple", 5);

}


int	main()
{
    auto (name,value) = TestAuto();
    std::cout << "value is: " << value << std::endl;
    return 0;
}
