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
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,0);
        dp[n] = 0;
        dp[n-1] = cost[n-1];
        for(int i = n-2; i>=0; i--){
            dp[i] = min(dp[i+1], dp[i+2]) + cost[i];
        }
        return min(dp[0], dp[1]);
    }
};

int main(){
    Solution s;
    vi cost = {10, 15, 20};
    int res = s.minCostClimbingStairs(cost);
    cout<<res<<endl;
}