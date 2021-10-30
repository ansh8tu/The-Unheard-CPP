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

bool targetSumSubset(vi setOfNums, int target){
    int n = setOfNums.size();
    int m = target;
    bool dp[100][100];

    LOOP(i, 0, n+1){
        LOOP(j, 0, m+1){
            if(i == 0 && j == 0){
                dp[i][j] = true;
            }else if(i == 0){
                dp[i][j] = false;
            }else if(j == 0){
                dp[i][j] = true;
            }else{
                int check = setOfNums[i-1];
                if(dp[i-1][j] == 1){
                    dp[i][j] = true;
                }else{
                    if(j >= check){
                        if(dp[i-1][j-check] == 1){
                            dp[i][j] = true;
                        }
                    }
                }
            }
        }
    }
    return dp[n][m];
}

int main(){
    bool res = targetSumSubset({4, 2, 7, 1, 3}, 10);
    cout<<res<<endl;
}