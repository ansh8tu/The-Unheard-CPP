#include<iostream>
using namespace std;


class Class1{
    private:
        int x, y;
    public:
        void setX(int x){ this->x = x; }
        int getX(){ return x; }
        void setY(int y){ this->y = y; }
        int getY(){ return y; }
        

        Class1(int x, int y) : x(0), y(0) {
            cout<<"Def value of x : "<< x << endl <<"Def value of y : "<< y << endl;
        }
};

int main(){

    Class1 c1(10, 20);
    c1.setX(100);
    c1.setY(200);
    cout<<"The updated value of x is : "<<c1.getX()<<endl;
    cout<<"The updated value of y is : "<<c1.getY()<<endl;

    //lets quickly learn about ternary operators as well
    string playerRank;
    int level;

    level = 12;

    //variable you want to change = condition ? if condition is true : if statement is false 
    playerRank = level > 10 ? "Pro!" : "Beginner";
    cout<<"The player rank is : "<< playerRank;
    
}