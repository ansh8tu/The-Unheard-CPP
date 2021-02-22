#include<iostream>
#include<memory>

using namespace std;

class ClassOne{
    public:
        int a, b;

        ClassOne(){
            cout<<"Constructor Called!"<<endl;
        }

        ~ClassOne(){
            cout<<"Destructor Called!"<<endl;
        }

        void printName(){
            cout<<"Hello, World!"<<endl;
        }
};

int main(){

    //using new and delete 
    //ClassOne* p = new ClassOne();
    //p->a = 2;
    //p->b = 3;
    //delete p;

    //basically if you want to get rid of the new and delete keyword then 
    //start using the smart pointers they'll automatically do this stuff for you 

    //as simple as that there are three of them : unique, shared and weak;

    //using smart pointers
    //keyword   <type of ptr>  name of ptr           creating the object
    unique_ptr  <ClassOne>     p1             =      make_unique<ClassOne>();
    shared_ptr  <ClassOne>     p2             =      make_shared<ClassOne>();
    p2->printName();

}