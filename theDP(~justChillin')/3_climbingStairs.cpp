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

//dynamic programming approach 
//Step 1: I a, using tabulation here, in the vector(1-d array) i am storing the number of steps in order to reach the top
class Solution { 
public:
    int climbStairs(int n) {
        vector<int> storingSteps((n+1), 0);
        int s = storingSteps.size();

        //initializing the number of ways to reach top when already at top to 1
        storingSteps[s-1] = 1;

        //identifying the direction of filling the vector
        for(int i= s-2; i>=0; i--){

            //actually filling the vector
            if(i == s-2){
                storingSteps[i] = storingSteps[i+1];
            }
            else{
                storingSteps[i] = storingSteps[i+1] + storingSteps[i+2];
            }
            
        }

        return storingSteps[0];
    }
};

int main(){
    Solution s;
    int res = s.climbStairs(5);
    cout<<res<<endl;
}