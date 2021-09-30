#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
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
    int maxProfit(vector<int>& prices) {
        int minSoFar = prices[0];
        int maxP = 0;

        for(int i=0; i<prices.size(); i++){
            minSoFar = min(prices[i], minSoFar);
            int profit = prices[i] - minSoFar;
            maxP = max(profit, maxP);
        }

        return maxP;
    }
};

int main(){
    vi prices = {7,1,5,3,6,4};
    Solution s;
    int res = s.maxProfit(prices);
    cout<<res<<endl;
}