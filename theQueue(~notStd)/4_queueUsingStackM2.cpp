#include<iostream>
#include<stack>
using namespace std;

class Queue{
    public:
        stack<int> stack;

    public:
        void push(int data){
            stack.push(data);
        }

        int pop(){

            if(stack.empty()){
                cout<<"Pop Operation can't be performed"<<endl;
                return -1;
            }

            //store the topmost element and pop it 
            int topElement = stack.top();
            stack.pop();

            //check whether the stack had only a single element and return it
            if(stack.empty()){
                return topElement;
            }

            int finalAns = pop();
            stack.push(topElement);

            return finalAns;

        }

        bool empty(){
            if(stack.empty()){
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

    cout<<que.empty()<<endl;


}