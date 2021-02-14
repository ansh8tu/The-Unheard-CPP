/*

So, basically what are enums, to learn this stuff lets go back, so we all know what a datatype is right?
So basically there are two types of datatypes- primitive(int, char, float, double) & non-primitive(structures, unions & enums)

So what makes an enum speacial or what an enum actually is? Well enum is just a datatype which helps us
give name to our integers, like for a certian error message you can write 0 for false and 1 for true
but it isn't that much readable, but what if we could give cool names to these integers

Like for 0 we could give fails, and for 1 passes, this is what an enum does, lets dive into some code now:

*/

#include<iostream>
using namespace std;

enum logCondition{
    //so the initial value in an enum is iniltialised with 0 and others also
    //get intialized to one more than the prior one like in this case fails=0 and
    //passes = 1;
    fails, passes
};

enum Month{
    jan=1, feb, march, april, may, june, july,
    august, sept, october, nov, december

};

int main(){

    //sometimes we get confused with month numbers so lets create a small application for user 
    //where he'll enter the number of month and we'll tell him the month
    int userMonth;
    cout<<"Enter the month in number: ";
    cin>>userMonth;

    //we could've simply compared userMonth with 1 but writing jan 
    //makes the reader understand that if the month is jan 
    //so we can clearly improve the readability of our code by enums, thats it
    if(userMonth == jan){
        cout<<"It's January!"<<endl; 
    }

    else if(userMonth == feb){
        cout<<"It's February!"<<endl; 
    }

    else if(userMonth == march){
        cout<<"It's March!"<<endl; 
    }

    else if(userMonth == april){
        cout<<"It's April!"<<endl; 
    }

    else if(userMonth == may){
        cout<<"It's May!"<<endl; 
    }

    else if(userMonth == june){
        cout<<"It's June!"<<endl; 
    }

    else if(userMonth == july){
        cout<<"It's July!"<<endl; 
    }

    else if(userMonth == august){
        cout<<"It's August!"<<endl; 
    }

    else if(userMonth == sept){
        cout<<"It's September!"<<endl; 
    }

    else if(userMonth == october){
        cout<<"It's October!"<<endl; 
    }

    else if(userMonth == nov){
        cout<<"It's Novemeber, also it's my birthday!"<<endl; 
    }

    else if(userMonth == december){
        cout<<"It's December!"<<endl; 
    }

    else{
        cout<<"The month range is from 1-12 only!"<<endl; 
    }



}