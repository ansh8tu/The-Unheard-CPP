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


int unboundedKnapsack(vi weights, vi profit, int capacity){
    vector<pair<int, int>> weightProfit;
    int solution;

    for(int i=0; i<weights.size(); i++){
        weightProfit.PB({weights[i], profit[i]});
    }

    vector<pair<double, pair<int, int>>> finalRes;

    for(int i=0; i<weights.size(); i++){
        double val = weightProfit[i].second*1.0 / weightProfit[i].first*1.0;
        finalRes.PB({val, weightProfit[i]});
    }

    sort(finalRes.begin(), finalRes.end());

    while(capacity){
        for(auto it = finalRes.end() -1; it>= finalRes.begin(); it--){
            if(capacity >= it->second.first){
                int times = capacity / it->second.first;
                solution += it->second.second*times;
                capacity -= it->second.first*times;
            }
        }
    }

    return solution;
}

int main(){
    vi weights = {5, 10, 15};
    vi profit = {10, 30, 20};
    int capacity = 100;
    cout<<unboundedKnapsack(weights, profit, capacity);
    return 0;
}
