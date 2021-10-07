#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<int,int> mi;
typedef unordered_map<int,int> umi;
typedef stack<int> st;
typedef queue<int> que;
typedef priority_queue<int> pq;


#define LOOP(i, a, b) for(int i = a; i<b; i++) 
#define ITLOOP(it, a, b) for(auto it=a; it!=b; it++)
#define F first
#define S second
#define PB push_back
#define MP make_pair

class Solution {
public:
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
};

int main(){
    Solution s;
    bool res = s.isValid("()()");
    cout<<res<<endl;
}