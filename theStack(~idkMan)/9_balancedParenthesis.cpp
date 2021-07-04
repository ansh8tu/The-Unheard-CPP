#include<iostream>
#include<stack>
using namespace std;

bool balancedCheck(string ex){
    bool res = true;
    stack<char> stackzy;

    for(int i=0; i<ex.length(); i++){

        if(ex[i] == '(' || ex[i] == '{' || ex[i] == '['){
            stackzy.push(ex[i]);
        }

        else if(ex[i] == ')'){
            if(stackzy.top() == ')'){
                stackzy.pop();
            }
            
            else{
                res = false;
                break;
            }
        }

        else if(ex[i] == '}'){
            if(stackzy.top() == '}'){
                stackzy.pop();
            }
            
            else{
                res = false;
                break;
            }
        }

        else if(ex[i] == ']'){
            if(stackzy.top() == ']'){
                stackzy.pop();
            }
            
            else{
                res = false;
                break;
            }
        }
        
    }

    return res;

}

int main(){
    string ex = "{[(])}";
    bool res = balancedCheck(ex);

    if(res){
        cout<<"Balanced Parenthesis!"<< endl;
    }

    else{
        cout<<"Unbalanced Parenthesis!"<< endl;
    }
}