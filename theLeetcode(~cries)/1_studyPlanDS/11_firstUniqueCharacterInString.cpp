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
    int firstUniqChar(string s) {
        map<char, int> m;
        //you can also use unordered_map but in leetcode it gave me 200ms so i'll stick with the map only
        char c = 'a';

        for(int i=0; i<s.size(); i++){
            if(m.find(s[i]) != m.end()){
                m[s[i]]++;
            }
            m.insert({s[i], 1});
        }

        for(int i=0; i<s.size(); i++){
            if(m[s[i]] == 1){
                return i;
                break;
            }
        }
        return 0;
    }
};

int main(){
    Solution sol;
    int res = sol.firstUniqChar("leetcode");
    cout<<res<<endl;
}