// CPP program
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> strg = {"learning","c++", "now"};

    vector<int> intgr;  //when the size of the array is known, 
    //vectors don't like addition of elements using push_backs

    vector<int> avrg;
    for(int x; cin>>x;){

        avrg.push_back(x);
    }

    int sum = 0;
    for(int val: avrg) sum +=val;

    cout<<"average is: "<< sum/avrg.size()<<endl;

    for(int x=0; x<6; x++){

         intgr.push_back(x);
         cout<<"intrg["<<x<<"] is: "<<intgr[x]<<endl;
        
    }

    int number;
    for(int input; cin>>number;){
 
      intgr.push_back(number);
      cout<<"you just added: "<<intgr[intgr.size()-1]<<endl;

    }


    for(string s: strg){


        cout<<"s is: "<<s<<endl;
        //cout<<"intrg size is: "<<intgr.size()<<endl;
        
    }


return 0;
	
}
