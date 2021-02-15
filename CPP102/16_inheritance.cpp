/*

So let's now move to the next object oriented programming concept, i.e., inheritance 

So basically inheritance, is used for removing the code duplicacy and also to 
inherit certian features from the base class(original class from which other classes are derived) 

This is just an introduction, please go through the code and you'll be able to understand through
it!

Why, inheritance??

Well, we've already discussed the drawbacks of code duplicacy and rewriting the same code over and over again
so a simple solution to that is to inherit the common part of the code in another class, also if the new class 
isn't making sense then you can remove it and go to back to your previous class without effecting the whole program,

Otherwise if we would've made changes in the original/base class then it would've effected our whole program
and we would be left with no other option except for writing the code from scratch, inheritance helps you here

*/


#include<iostream>
using namespace std;

class Parent {
    public:
        int x;
        int y;

        Parent(int a, int b){
            x=a;
            y=b;
            cout<<"Hello from Parent Constructor!"<<endl;
        }

        Parent(){
            cout<<"Parent Constructor Called!"<<endl;
        }

        void anyMethod(int x, int y){
            cout<<"The value of x is : "<<x<<endl;
            cout<<"The value of y is : "<<y<<endl;
        }
};

//inheritance 
class Child : public Parent {
    public:
        const char* name;

        Child(const char* name){
            cout<<"Child constructor called!"<<endl;
            cout<<"The name of child is : "<<name<<endl;
        }

};

int main(){

    Child ch1("Sam");
    ch1.anyMethod(10, 20);
    //Output is as follows:
    //Parent Constructor Called!
    //Child constructor called!
    //The name of child is : Sam
    //The value of x is : 10
    //The value of y is : 20

}