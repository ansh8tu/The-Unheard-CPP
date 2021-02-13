/*

Let's deep dive into static keyword so what is a static keyword, so basically we all know 
that at some point of time we'll be working in a team and we'll have multiple cpp files and lets suppose that 
if you and your colleague have declared a variable as a global variable with the same name, so when you'll 
link and compile the code it'll give an error as it'll not be linked 

but if you use static keyword then that variable is only visible to that cpp file and there'll be no error,
Adding up suppose you want to increment a value in program let's try this 


also static variables unlike regular variables are always initialized to 0, normal variable have garbage values
if not initialized.

*/

#include<iostream>
using namespace std;

void incrementX(){
    
    //if you'll remove static then the output will be 0000, and with static it'll be 0123
    static int x =0;
    cout<<x++;
}

int main(){

    for(int i=0; i<4; i++){
        incrementX();
    }
}