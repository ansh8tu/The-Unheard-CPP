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

int coinChangeProblem(vi typeOfCoins, int target){
    vi dp(target+1, 0);
    dp[0] = 1;

    LOOP(i, 1, dp.size()){
        LOOP(j, 0, typeOfCoins.size()){
            if(typeOfCoins[j] <= i){
                dp[i] += dp[i - typeOfCoins[j]];
            }
        }
    }
    return dp[target];
}


int main(){
    int res = coinChangeProblem({2, 3}, 5);
    cout<<res<<endl;
}