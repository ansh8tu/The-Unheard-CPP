#include<iostream>
using namespace std;
#define n 10

class Stack{
    public:
        int top;
        int* array;
    
    Stack(){
        array = new int[n];
        top=-1;
    }
    
    void push(int data){
        if(top == n-1){
            cout<<"Stack is full, Sorry :/"<<endl;
            return;
        }
        top++;
        array[top] = data;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty, Sorry :/"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is empty, Sorry :/"<<endl;
            return -1;
        }
        return array[top];
    }

    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }

};

int main(){

    Stack stackzy;
    stackzy.push(10);
    stackzy.push(20);
    stackzy.push(30);

    cout<<stackzy.Top()<<endl;
    stackzy.pop();

    cout<<stackzy.Top()<<endl;
    stackzy.pop();

    cout<<stackzy.Top()<<endl;
    stackzy.pop();

    cout<<stackzy.empty()<<endl;
}