#include<iostream>
#include<stack>
using namespace std;

class Queue{
    
    public:
        stack<int> stackOne;
        stack<int> stackTwo;

    public:
        void push(int data){
            stackOne.push(data);
        }

        int pop(){
            if(stackOne.empty() && stackTwo.empty()){
                cout<<"Sorry can't pop, Queue is Empty!"<<endl;
                return -1;
            }
            if(!stackOne.empty()){
                while(!stackOne.empty()){
                    stackTwo.push(stackOne.top());
                    stackOne.pop();
                }
            }

            int topMostValue =  stackTwo.top();
            stackTwo.pop();

            return topMostValue;

        }

        bool empty(){
            if(stackOne.empty() && stackTwo.empty()){
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

    cout<<"Popped Element: "<<que.pop()<<endl;
    cout<<"Popped Element: "<<que.pop()<<endl;
    cout<<"Popped Element: "<<que.pop()<<endl;
    
    que.pop();

}