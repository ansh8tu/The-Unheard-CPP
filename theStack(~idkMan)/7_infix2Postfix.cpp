#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int precedenceOfOperator(char op){
    if(op == '^'){
        return 3;
    }

    else if(op == '*' || op == '/'){
        return 2;
    }

    else if(op == '+' || op == '-'){
        return 1;
    }
    
    else{
        return -1;
    }
    
}

string infixToPostfix(string expression){
    stack<char> stackzy;
    string postfixRes;

    for(int i=0; i<expression.length(); i++){
        
        if((expression[i] >= 'a' && expression[i] <= 'z') || (expression[i] >= 'A' && expression[i] <= 'Z')){
            postfixRes+= expression[i];
        }

        else if(expression[i] == '('){
            stackzy.push(expression[i]);
        }

        else if(expression[i] == ')'){
            while(!stackzy.empty() &&stackzy.top() != '('){
                postfixRes+=stackzy.top();
                stackzy.pop();
            }
            
            if(!stackzy.empty()){
                stackzy.pop();
            }
            
        }

        else{
            while(!stackzy.empty() && precedenceOfOperator(stackzy.top()) > precedenceOfOperator(expression[i])){
                postfixRes+=stackzy.top();
                stackzy.pop();
            }
            stackzy.push(expression[i]);
        }
    }

    while(!stackzy.empty()){
            postfixRes+=stackzy.top();
            stackzy.pop();
    }

    return postfixRes;

}

int main(){
    cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<endl;
}
    
