#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixExpression(string expression){
    stack<int> stackzy;

    for(int i= expression.length() - 1; i>=0; i--){
        if(expression[i] >= '0'   && expression[i] <= '9'){
            stackzy.push(expression[i] - '0');
        }

        else{
            int opOne = stackzy.top();
            stackzy.pop();
            int opTwo = stackzy.top();
            stackzy.pop();

            switch (expression[i]){
                case '+':
                    stackzy.push(opOne + opTwo);
                    break;
                case '-':
                    stackzy.push(opOne - opTwo);
                    break;
                case '*':
                    stackzy.push(opOne * opTwo);
                    break;
                case '/':
                    stackzy.push(opOne / opTwo);
                    break;
                case '^':
                    stackzy.push(pow(opOne, opTwo));
                    break;
                default:
                    break;
            }
        }
    }

    return stackzy.top();
}

int main(){
    string expression = "-+7*45+20";
    int exp = prefixExpression(expression);
    cout<<exp<<endl;
}