#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

class Solution{

public:

    unordered_map<string, int> m1;
    vector<string> v1;

    int minParenToRemove(string s){
        stack<char> stackzy;

        for(int i=0; i< s.length(); i++){
            if(s[i] == '('){
                stackzy.push(s[i]);
            }

            else if(s[i] == ')'){
                if(stackzy.empty()){
                    stackzy.push(s[i]);
                }

                else if(stackzy.top() == '('){
                    stackzy.pop();
                }

                else if(stackzy.top() == ')'){
                    stackzy.push(s[i]);
                }
            }
        }

        return stackzy.size();
    }

    bool isValid(string s){
        stack<char> stackzy;

        for(int i=0; i< s.length(); i++){
            if(s[i] == '('){
                stackzy.push(s[i]);
            }

            else if(s[i] == ')'){
                if(stackzy.empty()){
                    stackzy.push(s[i]);
                }

                else if(stackzy.top() == '('){
                    stackzy.pop();
                }

                else if(stackzy.top() == ')'){
                    stackzy.push(s[i]);
                }
            }
        }

        if(stackzy.size() == 0){
            return true;
        }

        return false;
    }

    void solve(string s, int minRemAllowed) {
    
        if(m1[s] != 0){
            return;
        }
        else{
            m1[s]++;
        }

        if(minRemAllowed == 0){
            if(isValid(s) == true){
                v1.push_back(s);
            }    
            return;
        }

        for(int i=0; i<s.length(); i++){
            string left = s.substr(0,i);
            string right = s.substr(i+1);
            solve(left+right, minRemAllowed -1);
        }

        return;
    }

    vector<string> removeInvalidParentheses(string s) {
        solve(s,minParenToRemove(s));
        return v1;
    }
};

int main(){
    string s = "()())()";
    Solution s1;
    vector<string> v = s1.removeInvalidParentheses(s);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    
}