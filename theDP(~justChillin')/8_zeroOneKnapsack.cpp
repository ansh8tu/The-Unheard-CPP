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

int zeroOneKnapsack(vi &weights, vi &profit, int capacity){
    int dp[100][100];
    for(int i=0; i<=weights.size(); i++){
        for(int j=0; j<=capacity; j++){
            if(i==0 || j == 0){
                dp[i][j] = 0;
            }else if(weights[i] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - weights[i]] + profit[i]);
            }
        }
    }

    return dp[weights.size()][capacity];
}

int main(){
    vi weights = {2, 5, 1, 3, 4};
    vi profit = {15, 14, 10, 45, 30};
    int capacity = 7;
    cout<<zeroOneKnapsack(weights, profit, capacity);
    return 0;
}