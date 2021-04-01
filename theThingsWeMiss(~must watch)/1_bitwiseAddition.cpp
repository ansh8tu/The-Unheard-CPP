 /*
    lets take two numbers 5 and 4 
    now let's convert them into base-2 i.e. binary format
    5 -> 0110 and 4-> 0100
    on addition of 110 and 100(binary format addition)
    carry part : 1 
    num2(4)    : 0 1 0 0
    num1(5)    : 0 1 0 1
    sum        : 1 0 0 1 (for the leftmost digit when we add 1 + 1, we get 2 and what is 2 in binary format, exactly it is 10
                         so what we'll do is that is we'll give the 1 to carry and add the zero to the sum and continue addition,
                         now since we've reached the end we'll append the carry part at the leftmost part)

    finally we get the sum as 1001 which is nothing but 9(5 + 4)

    Now coming back to our task, like how do i actually code to add the numbers, well for this we will use three bitwise operators namely
    & -> returns 1 only when both are 1
    ^ -> exclusive or(works just like or but the only difference is that it returns 0 if both are 1 )
    << -> left shift operator(We'll use it for the carry purpose i'll tell you how in coming part of code)

    Now with some badic understanding lets jump into code(the easiest part)
    */

#include<iostream>
using namespace std;

int addNum(int num1, int num2){
    while(num2!=0){

        //Iteration 1: lets take the same example of 5 and 4 i.e. binary form 0101 & 0100 = 0100 i.e. carry = 0100
        //Iteration 2: Now num1= 0001 and num2 = 1000 num1 & num2 = 0000 i.e. carry = 0000

        int carry = num1 & num2; // why did i do this because it contains the carry part always

        //Iteration 1: continuing 0101 ^ 0100 = 0001
        //Iteration 2: 0001 ^ 1000 = 1001

        num1 = num1 ^ num2; // why did i do this because it contains the actual addition part always

        //Iteration 1: now num2 will contain 1000
        //Iteration 2: now num2 will contain 0000

        num2 = carry<<1; // in next iteration's addition num2 contains the left shifted part of carry so that addition is proper

        //condition checking for next iteration
    }
    //condition false after 2nd iteration exits while loop

    //returns 1001 i.e. 9
    return num1;
   
}

int main(){
    int num1, num2;
    cin>>num1>>num2;
    cout<<addNum(num1, num2);
}