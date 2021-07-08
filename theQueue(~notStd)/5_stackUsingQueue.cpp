#include<iostream>
#include<queue>
using namespace std;

class Stack{

    public:
        queue<int> que;
    public:
        void push(int data){
            //push the data
            //remove all the elements which were previously there and push them back again
            que.push(data);
            for(int i=0; i<que.size()-1; i++){
                que.push(que.front());
                que.pop();
            }
        }

        void pop(){
            if(que.empty()){
                cout<<"Queue is empty!"<<endl;
            }
            else{
                que.pop();
            }
            
        }

        int top(){
            if(que.empty()){
                cout<<"Queue is empty!"<<endl;
                return -1;
            }
            else{
                return que.front();
            }
        }

};

int main(){
    Stack stackzy;
    stackzy.push(10);
    stackzy.push(20);
    stackzy.push(30);

    cout<<stackzy.top()<<endl;
    stackzy.pop();

    cout<<stackzy.top()<<endl;
    stackzy.pop();

    cout<<stackzy.top()<<endl;
    stackzy.pop();

    stackzy.pop();

    

}
