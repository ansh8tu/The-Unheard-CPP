/*

So basically references are almost similar to that of pointers with a little difference that they
are an alias to a variable which need to be initialised always, don't worry once we get to the code 
you'll get that,

*/

#include<iostream>
using namespace std;

int main() {

    int a;
    int b=6;
    
    //creating a reference/alias of a
    int& referenceA = a;
    //Now what we have done is that we have created this reference 'variable' (alias) and now we can use it 

    referenceA = 4;

    //prints 4
    cout<<"Value of a : " << a <<endl;

    //ps: Note that you can't change the reference to another variable like if you do this as shown below then
    //it'll simply take thate value of that variable and store in the reference and not reference to it

    referenceA =b;

    //prints 6 
    cout<<"Value of a : " << a <<endl;

    //prints 6 
    cout<<"Value of b : "<< b<<endl;
   

}