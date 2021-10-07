#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty() && s2.empty()){
            return -1;
        }
        
        if(!s2.empty()){
           int topVal = s2.top();
           s2.pop();
           return topVal;
        }
        
        else{
            while(!s1.empty()){
                int num = s1.top();
                s2.push(num);
                s1.pop();
            }
            int topVal = s2.top();
            s2.pop();
            return topVal;
        }
        
        
    }
    
    int peek() {
        if(s1.empty() && s2.empty()){
            return -1;
        }
        
        if(!s2.empty()){
            return s2.top();
        }

        else{
            while(!s1.empty()){
                int num = s1.top();
                s2.push(num);
                s1.pop();
            }
            int topVal = s2.top();
            return topVal;
        }
        
        
    }
    
    bool empty() {
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){

    MyQueue que;
    que.push(10);
    que.push(20);
    que.push(30);

    cout<<"Popped Element: "<<que.pop()<<endl;
    cout<<"Popped Element: "<<que.pop()<<endl;
    cout<<"Popped Element: "<<que.pop()<<endl;
    
    que.pop();

}