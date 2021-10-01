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
    vector<vector<int>> res;
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i=0; i<numRows; i++){
            vector<int> v(i+1, 1);
            for(int j=1; j<i; j++){
                v[j] = res[i-1][j-1] + res[i-1][j];   
            }
            res.push_back(v);
        }
        return res;

    }
};

int main() {
    Solution s;

    vvi res = s.generate(5);
    LOOP(i, 0, res.size()){
        LOOP(j, 0, res[i].size()){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}