#include<bits/stdc++.h>
using namespace std;

//I need to add two numbers so how do i add them using functions
int add(int anyVarOne, int anyVarTwo){
    return anyVarOne + anyVarTwo;
}

//I need to add two strings so how do i add them using functions
string add(string anyVarOne, string anyVarTwo){
    return anyVarOne + anyVarTwo;
}

//I need to add two doubles so how do i add them using functions
double add(double anyVarOne, double anyVarTwo){
    return anyVarOne + anyVarTwo;
}

//You noticed what the problem really is, yes we are simply copy pasting the same code and juct changing the datatypes
//and the returntypes

//In order to avoid this, we can use something known as tempelates where we can give a typename named anything, for instance 
//in the below example i've named it T

template<typename T>
T printAnything(T anyVarOne, T anyVarTwo){
    return anyVarOne + anyVarTwo;
}

int main(){
    
    cout << printAnything<int>(10, 20) << endl;
    cout<< printAnything<string>("Hello", " World")<<endl;
    cout << printAnything<double>(10.25, 20.25) << endl;
    
    //you don't even have to give the typename but its good to give one as it makes your code readable
    cout << printAnything(10.25, 20.25) << endl;

}