#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};


class Stack{
    public:
        Node* top;
    
    Stack(){
        top = NULL;
    }

    void push(int data){
        Node* node = new Node(data);
        if(top == NULL){
            top = node;
            return;
        }
        node->next = top;
        top = node;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        Node* deletePtr = top;
        top = top->next;
        delete(deletePtr);
    }

    int Top(){
        return top->data;
    }

    bool empty(){
        if(top == NULL){
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

    if(stackzy.empty()){
        cout<<"Stack is empty"<<endl;
    }

}