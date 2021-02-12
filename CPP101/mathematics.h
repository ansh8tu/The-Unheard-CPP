#pragma once
#include<iostream>

void addNumbers(int num1, int num2){
    int sum = num1 + num2;
    std::cout<<"The sum is : "<<sum<<std::endl;
}

void multiplyNumbers(int num1, int num2){
    int mul = num1 * num2;
    std::cout<<"The product is : "<<mul<<std::endl;
}

void subNumbers(int num1, int num2){
    int sub = num1 - num2;
    std::cout<<"The diff is : "<<sub<<std::endl;
}

void divideNumbers(int num1, int num2){
    int div = num1 / num2;
    std::cout<<"The quotient is : "<<div<<std::endl;
}
