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
    int fib(int n) {
        vector<int> v(n+1, 0);
       
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        
        else{
            v[0] = 0;
            v[1] = 1;
            for(int i=2; i<v.size(); i++){
                v[i] = v[i-1] + v[i-2];
            }
            return v[n];
        }   
    }
};

int main(){
    Solution s;
    int res = s.fib(6);
    cout<<res<<endl;
}