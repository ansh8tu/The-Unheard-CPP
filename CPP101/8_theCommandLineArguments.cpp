/*

Command line arguments are arguments which are passed as parameters to the main function
argc = argument count i.e, the number of arguments passed during compilation
argv = the arguments that are given

for ex if you do this 
*/


#include<iostream>
#include<sstream>
using namespace std;

int main(int argc, char* argv[]){

    //prints 3 
    cout<<"The number of arguments passed are : "<<argc<<endl;
    int stringToInt[10];
    int sum =0;

    for(int i=1; i<argc; i++){
        cout<<"The string value of argument "<< i << " is : "<<argv[i]<<endl; 
        //prints 4 and 8
    }
    
}

//run the above as g++ 8_theCommandLineArguments.cpp
//followed by ./a.out 4 8 