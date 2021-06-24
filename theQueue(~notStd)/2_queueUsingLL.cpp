#include<iostream>
using namespace std;

class Node{

    public:
        Node* next;
        int data;

    public:
        Node(int data){
            this->data = data;
            next = NULL;
        }

};

class Queue{

    public:
        Node* front;
        Node* rear;
    
    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }


    void push(int data){
        Node* node = new Node(data);

        if(front == NULL){
            front = node;
            rear = node;
        }

        rear->next = node;
        rear = node;
    }

    void pop(){
        if(front == NULL ){
            cout<<"Queue is Empty!";
            return;
        }

        Node* deletePtr = front;
        front = front->next;
    }

    int peek(){
        if(front == NULL ){
            cout<<"Queue is Empty!";
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front == NULL ){
            return true;
        }
        return false;
    }
};

int main(){
    Queue que;
    que.push(10);
    que.push(20);
    que.push(30);

    cout<<que.peek()<<endl;
    que.pop();

    cout<<que.peek()<<endl;
    que.pop();

    cout<<que.peek()<<endl;
    que.pop();

    if(que.empty()){
        cout<<"Queue is empty!";
    }
}