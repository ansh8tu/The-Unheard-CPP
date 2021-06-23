#include<iostream>
using namespace std;

#define n 10

class Queue{
    public:
        int front;
        int rear;
        int* array;
    public:
        Queue(){
            array = new int[n];
            front = -1;
            rear = -1;
        }

    void push(int data){
        if(rear == n-1){
            cout<<"Sorry, Can't insert queue is full!"<<endl;
            return;
        }
        rear++;
        array[rear] = data;
        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front == -1 || front > rear){
            cout<<"Sorry, Can't delete queue is empty!"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front == -1 || front > rear){
            cout<<"Sorry, Can't peek queue is empty!"<<endl;
            return -1;
        }

        return array[front];
    }

    bool empty(){
        if(front == -1 || front > rear){
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
}