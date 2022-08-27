#include<iostream>
#include<vector>

int area(int x, int y){
    
    return x * y;

}


int main(){

  int width = -1;
  int length = 9;

  int area1 = area(length,width);

  std::cout<<"the area is: "<<area1<<std::endl;

  try
  {
    std::vector<int> v;
    for(int x; std::cin>>x;)  // int x is a declaration of the variable x that would collect the user input

        v.push_back(x);

    for(int i = 0; i<=v.size(); ++i)
        std::cout<<"v["<<i<<"] == "<<v[i]<<'\n';
    
    
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  
  return 0;

}