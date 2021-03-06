/*

Before writing any piece of code, I just want to say that don't overthink about
pointers 
Pointer is basically a datatype which stores address of the variable that it is
pointing to 

Let me Explain it to you this way, when you write int x =10 , so basically you've
created a variable x of datatype int which stores an integer type value,
similarly when you write int* x , it basically means that x is a pointer pointing
to integer type value, that's it

PRO TIP: Start reading the pointer from right to left 
x=variable 
*=pointer
int=integer

right to left (x is a pointer to integer type values)

*/


#include<iostream>
using namespace std;

int main(){
    int* p;
    int b=10;
    p=&b;

    cout<<"The value of the variable is : "<<b<<endl;
    //the above expressipn displays 10


    cout<<"The address of that variable is : "<<p<<endl;
    //the above expression displays 0x7bfe14

    //lets play with the value ant try to change it 
    //dereferncing with *operator *(&b)
    //in simple way you can consider like * and & cancel each other and we are
    //left with b only
    //NOTE: The above line is just to make you understand the concept

    *p=20;

    cout<<"The value after changing is : "<<b<<endl;
    //the above expressipn displays 20


    //look the address is still the same this means that still it is pointing to
    // same location 
    cout<<"The address of that variable is : "<<p<<endl;
    //the above expression displays 0x7bfe14 which is still the same 


    //lets discuss a char* pointer which some of us might not be familiar with
    //try compiling this without using const and you will get a warning, but why?
    //because string constants cannot be modified as they are present in read only memory
    const char* myString;
    myString = "Hello, World!";
    cout<<myString<<endl;

    //so why did we use a char*, the answer is quite simple we already know 
    //that this string will be stored in a continous memory location and if 
    //we want to do so then we need to store the address of the first character
    //and in order to do so we use a char* pointer 

    cout<< *(myString + 2)<<endl;
    //prints l

    //|H|e|l|l|o|,|W|o|r|l|d|/o---> escape sequance 
   
}