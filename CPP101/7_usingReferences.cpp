#include<iostream>
using namespace std;

void swapNumbers(int& num1, int& num2){
    int num3 = num2;
    num2 = num1;
    num1 = num3;
}

//this will work exactly the same but looks tricky so prefer the first one 
void swapNumbersUsingPointers(int* num1, int* num2){
    int num3 = *num2;
    *num2 = *num1;
    *num1 = num3;
}


int main(){
    int num1, num2;
    cout<<"Enter Number 1 : ";
    cin>>num1;

    cout<<"Enter Number 2 : ";
    cin>>num2;


    swapNumbers(num1, num2);

    cout<<"Number 1 after swapping : "<<num1<<endl;

    cout<<"NUmber 2 after swapping : "<<num2<<endl;


}