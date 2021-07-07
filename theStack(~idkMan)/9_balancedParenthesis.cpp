#include<iostream>
#include<stack>
using namespace std;

bool isValid(string ex) {
    stack<char> stackzy;

    for(int i=0; i<ex.length(); i++){

        if(ex[i] == '(' || ex[i] == '{' || ex[i] == '['){
                stackzy.push(ex[i]);
        }
            
        else{
                
            if(stackzy.empty()){
                return false;
            }
                
            else if(ex[i] == ')'){
                if(stackzy.top() == '('){
                    stackzy.pop();
                }
            
                else{
                    return false;
                }
            }

            else if(ex[i] == '}'){
                if(stackzy.top() == '{'){
                    stackzy.pop();
                }
            
                else{
                    return false;
                }
            }

            else if(ex[i] == ']'){
                if(stackzy.top() == '['){
                    stackzy.pop();
                }
            
                else{
                    return false;
                }
            }
        
            }

           
        }

        if (stackzy.empty()){
            return true;
        }
        return false;

    }

int main(){
    string ex = "({])";
    bool res = isValid(ex);

    if(res){
        cout<<"Balanced Parenthesis!"<< endl;
    }

    else{
        cout<<"Unbalanced Parenthesis!"<< endl;
    }
}