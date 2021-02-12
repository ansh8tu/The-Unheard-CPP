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

        //converting those string arguments to integer so that we can add them 
        istringstream(argv[i]) >> stringToInt[i];
    }

    //now printing those integers 
    for(int i=1; i<argc; i++){
        cout<<"The integer value of argument " << i << " is : "<<stringToInt[i]<<endl;
    }

    //now calculating the sum
    for(int i=1; i<argc; i++){
        sum = sum + stringToInt[i];
    }

    cout<<"The sum of the arguments is : "<<sum<<endl;

}
