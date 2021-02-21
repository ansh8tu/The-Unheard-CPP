#include<iostream>
using namespace std;


class OpOverload{

    public:
        int x, y;
        int boostLevel;

        OpOverload(int x, int y) : x(x), y(y){
            cout<<"The position of object is : "<<"("<< x <<","<< y << ")"<<endl;
        };

        OpOverload operator+(OpOverload& boost){
            return OpOverload(x + boost.x, y + boost.y); 
        }

        OpOverload operator*(OpOverload& boost){
             return OpOverload(x * boost.x, y * boost.y); 
        }

};

int main(){

    OpOverload add1(10, 10);
    OpOverload add2(10, 5);

    OpOverload add3 = add1 + add2 ;
    OpOverload add4 = add1 * add2 ; 

}