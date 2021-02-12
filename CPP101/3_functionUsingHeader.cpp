#include "mathematics.h"
#include<iostream>

int main(){

    int num1, num2;

    std::cout<<"Enter Num 1 : ";
    std::cin>>num1;

    std::cout<<"Enter Num 2 : ";
    std::cin>>num2;

    addNumbers(num1, num2);
    multiplyNumbers(num1, num2);
    divideNumbers(num1, num2);
    subNumbers(num1, num2);
    
}