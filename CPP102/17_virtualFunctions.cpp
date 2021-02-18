/*

Actually virtal functions is indeed a deep topic, but we'll understand the basic stuff like how & when to 
use it. So basically we know what inheritance is, so let's suppose we have two classes, a class named singer
and other class named Lauv that inherits the functionality of singer class, let's suppose they both have a function
as intro which is of the exact same name but with different functionality, so during the compile time how'll the compiler know
which intro to call, so we'll use a pointer here to make this call at run time, and actually we'll make sure that late binding exists 
so that the virtual keyword can come into play 

ps : These are my notes if you don't understand they are made by me for me, chill check yt/gfg

*/



#include<iostream>
using namespace std;

class Singer{
    public:
        const char* name;
    public:
    //virtual helps in late binding 
        virtual void intro(){

            cout<<"Hello, Welcome to the Channel, Swipe up!"<<endl;
        }

};

class Lauv : public Singer{
    public:
        const char* name;
    public:
        void intro(){

            cout<<"Hello, Welcome to Lauv's Channel, Swipe up!"<<endl;
        }

};

int main(){

    //p is a pointer to singer type 
    Singer* p;
    Lauv l1;

    //p contains the address of object of Lauv class 
    p= &l1;

    //arrow style of calling the function 
    p->intro();

}