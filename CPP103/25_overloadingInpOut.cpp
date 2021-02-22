#include<iostream>
using namespace std;

class Intro{
    public:
        string fName;
        string lName;
};

/*

Okay, so let's understand this really easy and useful concept of operator overloading, so like today
we'll overload << and >> operators, lets talk about oveloading << first,

ofc, we'll be writing a function for the same, so without complicating any stuff, we'll be writing a simple prototype
return type functionName(some parameters){
    //definition blah blah blah!
}

*/

//return type - ostream(beacause we want to append more stuff seperated by << ), we'll pass a reference here
//as we don't want to copy values
//next we'll write operator followed by the operator we want to overload, in our case it'll be <<
//now passing parameters(reference variable to ostream named absoluetly anything, reference of your class's obj )

ostream& operator << (ostream& myOut, Intro& mine){
    myOut <<"Hello, " << mine.fName << " "<< mine.lName << "!";
    return myOut;
}

istream& operator >> (istream& myIn, Intro& mine){
    myIn>>mine.fName>>mine.lName;
    return myIn;
}

int main(){
    Intro mySelf;
    cout<<"Who this? : ";
    cin>>mySelf;

    cout<< mySelf<<endl;
}