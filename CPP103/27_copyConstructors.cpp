#include<iostream>
using namespace std;

class Box{
    public:
        int length, breadth, hieght;
    public:
        Box(){}
        Box(int length, int breadth, int hieght) : length(0), breadth(0), hieght(0){
            this->length = length;
            this->breadth = breadth;
            this->hieght = hieght;
        }
        Box(Box &Box1){
            cout<<"Copy Constructor invoked!"<<endl;
            length = Box1.length;
            breadth = Box1.breadth;
            hieght = Box1.hieght;
        }
};

int main(){
    Box b1(10,20,30), b2;
    cout<<"The length of Box-b1 is: "<<b1.length<<endl;
    cout<<"The breadth of Box-b1 is: "<<b1.breadth<<endl;
    cout<<"The hieght of Box-b1 is: "<<b1.hieght<<endl;

    
    cout<<endl;

    //copy constructor used 
    b2=Box(b1);

    cout<<endl;
    cout<<"The length of Box-b2 is: "<<b2.length<<endl;
    cout<<"The breadth of Box-b2 is: "<<b2.breadth<<endl;
    cout<<"The hieght of Box-b2 is: "<<b2.hieght<<endl;
    cout<<endl;

}