/*

As we already know that we can create static variable outside the classes, so why do we create them inside
the classes, the answer is quite simple, it makes sense, considering the below example it makes more sense 
to declare a static int variable student count inside a student class and not globally 

Lets dive deep into code now, cheers :)

*/


#include<iostream>
using namespace std;

class Student{
    public:
        //class variable because it is not created multiple times for multiple instances
        //it'll be created once and will exist for the lifetime of this program
        static int studentCount;

        //it is an instance variale as every instance will have its own unique variable by the name rollNo
        //it'll be create, used and then destroyed 
        int rollNo;

        static void studentCounter(int number){
            studentCount += number;
        }
};

//very importznt step if not done then the linker will give an error as it is a class variable and it
//needs to be defined/initialzed outside the class as well
int Student::studentCount;

int main(){
    int expectedIncrement;

    //you don't need to create instaces for staic variable/methods then can be simply
    //accessed by the scope resolution opertator
    Student::studentCount=10;

    cout<<"Enter the number of students you want to add : ";
    cin>>expectedIncrement;

    Student::studentCounter(expectedIncrement);
    cout<<Student::studentCount;
    //prints 16
}