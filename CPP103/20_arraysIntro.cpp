#include<iostream>
using namespace std;

int main(){

    //static array declaration - on stack
    int staticArray[4];

    //dynamic array declaration - on heap
    int* dynamicArray= new int[5];

    for(int i=0; i<4; i++){
        staticArray[i] = 2;
        dynamicArray[i] = 3;
    }

    cout<<"The address of staticArray is : "<<staticArray<<endl;

    for(int i=0; i<4; i++){
        cout<<"The value of element at index " << i <<" is : "<<staticArray[i]<<endl;
    }

    //revisiting pointers 
    int* p;
    p = staticArray;
    *p = 5;
    *(p+2) = 10;
    cout<<"The element at index 0 is "<<*(p)<<endl;
    cout<<"The element at index 1 is "<<*(p+2)<<endl;

}