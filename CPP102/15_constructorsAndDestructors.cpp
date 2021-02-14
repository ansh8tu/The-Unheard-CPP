/*

Constructors are really simple, they are used to initialise the data members so that 
they don't have garabage values in them/ also to avoid compile time errors

Destructors are exactly opposite to the constructors, they are called once we get out of 
scope of the function where the object is created in our case it is the main function

*/

#include<iostream>
using namespace std;

class Student{
    public:
        int rollNo;
        char section;

        //same name as class so this is the constructor
        //NOTE: it has no parameters, constructors are of two types:
        //Parameterised and Non-Parameterised
        Student(){
            rollNo = 1;
            section = 'A';
            cout<<"The default values for rollNumber and Section are : "<<rollNo<<" and "<<section<<" respectively "<<endl;
        }

        //destructor is used to delete the memory which is initialised to the object 
        ~Student(){
            cout<<"Destructor called when we get out of main function"<<endl;
        }

};

int main(){

    Student s1;
    //As soon as an object is created the constructor is called and the values are 
    //initialised in the memory 

    //if the above is not done then in some cases we'll get garbage values or even sometimes
    //the program won't compile

    s1.section = 'C';
    cout<<s1.section<<endl;

}
//once we get rid of this curly bracket then the destructor is called and 
//memory for the object is destroyed