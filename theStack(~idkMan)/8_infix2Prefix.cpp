#include<iostream>
#include<stack>
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

string reverseString(string expression){
    string reverse;

    for(int i=0; i<expression.length(); i++){
        reverse += expression[expression.length() - i - 1];
    }

    return reverse;

}

string bracketEx(string exp){
    for(int i=0; i< exp.length(); i++){
        if(exp[i] == '('){
            exp[i] = ')';
        }

        else if(exp[i] == ')'){
            exp[i] = '(';
        }

        else{
            continue;
        }   
    }

    return exp;
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

    // bro this seems complicated but chill first take the expression 
    // and reverse it 
    // now exchange ( with ) and ) with (
    // now apply the postfix expression function
    // now just take the resultant string and reverse it 
    // after reversing you'll get the final answer
    // ugh man so lengthy
    
    string s = "(a-b/c)*(a/k-l)";
    string revString = reverseString(s);
    string finalString = bracketEx(revString);

    string prefix = infixToPostfix(finalString);
    string finalPrevix = reverseString(prefix);
    cout<<finalPrevix<<endl;
}