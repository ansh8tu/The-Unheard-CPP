#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixExpression(string expression){
    stack<int> stackzy;

    for(int i=0; i<expression.length(); i++){
        if(expression[i] >= '0' && expression[i] <= '9'){
            stackzy.push(expression[i] - '0');
        }

        else{
            int opTwo = stackzy.top();
            stackzy.pop();
            int opOne = stackzy.top();
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
    string expression = "231*+9-";
    int exp = postfixExpression(expression);
    cout<<exp<<endl;
}
