#include<iostream>
#include<stack>
using namespace std;

void bottomInsertion(stack<int> stackzy, int element){
    while(stackzy.empty()){
        stackzy.push(element);
        return;
    }

    int topElement = stackzy.top();
    stackzy.pop();
    bottomInsertion(stackzy, element);
    stackzy.push(topElement);

}

void reverseStack(stack<int> stackzy){

    while(stackzy.empty()){
        return;
    }
    int element = stackzy.top();
    stackzy.pop();
    reverseStack(stackzy);
    bottomInsertion(stackzy, element);

}

int main(){

    stack<int> stackzy;
    stackzy.push(10);
    stackzy.push(20);
    stackzy.push(30);

    reverseStack(stackzy);

    while(!stackzy.empty()){
        cout<<stackzy.top()<<endl;
        stackzy.pop();
    }
}