#include<iostream>
using namespace std;

//abstract class or interface 
class Head {
    public:
       virtual void className() = 0;
       virtual string classTest() = 0;
};


class Class1 : public Head{
    public:
        void className() override {
            cout<<"Class1"<<endl;
        }
        string classTest() override{
            return "Class1";
        }
};

class Class2 : public Class1{
    public:
        void className() override {
            cout<<"Class2"<<endl;
        }
        string classTest() override{
            return "Class2";
        }
};

void printClassName(Head *h1){
    cout<< h1->classTest()<<endl;
}


int main(){

    Head* h1 = new Class1();

    //you can't do this as it is an interface
    //Head h1 = new Head();
   printClassName(h1);
   //prints Class1
}

