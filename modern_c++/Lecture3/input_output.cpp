#include<iostream>
#include<vector>
#include<fstream>

// https://linuxhint.com/create-vector-structs-cpp/

class ReadingFile
{
    public:
        int day;
        int temperature;
       // ReadingFile(int h, int t);
};

//ReadingFile::ReadingFile(int h, int t)
 //           :day{h}, temperature{t}

 //           {};

int main()

{
 
    
    std::vector<ReadingFile> temps;  // creatin an vector of a class (either a struct of a class)

    // temps[0].hour = 2;
    // temps[0].temperature = 20;

    // temps[1].hour = 3;
    // temps[1].temperature = 23;

    // std::cout<<"time and temperature at day 0: "<<temps[1].hour<<"hours, "<<temps[1].temperature<<"degrees ferenhight"<<std::endl;

    std::ifstream File_handler{"file.txt"};

    int day;

    int temp;

    if(File_handler){

      while(File_handler >> day >> temp){

     //std::cout << "hello" << std::endl;

      temps.push_back(ReadingFile{day, temp});   // you can do this without a constructor :  ReadingFile{day, temp}

      }

       File_handler.close();
      
    }

    else{

   std::cout<<"could not open the file";

    }

     std::cout << "day, temperature:" <<temps[2].day <<", "<<temps[2].temperature << std::endl;

    return 0;


}