#include<iostream>
#include<array>
#include<vector>


namespace formulars
{
    
    int convt_dol2naira(int);
    int convt_m2cm(int);
    int x = 8;


}

int formulars::convt_dol2naira(int dol){return dol*580; }

int formulars::convt_m2cm(int m){return m*100; }

int main(int argc, char **argv)

{

    std::array<int, 4> data{2,4,9,6};
    std::vector<int> vec;

    vec.push_back(8);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(6);

    for (const auto& elem: data){

        std::cout << elem <<std::endl;
    }

    for (const auto& content: vec)
    {
        std::cout<<"elements in the vector: "<<content<<std::endl;
    }
    

    auto naira = formulars::convt_dol2naira(100);
    std::cout<<"equivalence of $100 dollars in naira is: #"<< naira <<"naira"<<std::endl;
    std::cout<<"variable in the namespace: "<<formulars::x<<std::endl;
    return 0;
}
