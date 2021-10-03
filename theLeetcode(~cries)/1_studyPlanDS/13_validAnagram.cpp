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

//can ofc optimize it with one map, but that's for you to do
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;
        
        if(s.size() != t.size()){
            return false;
        }

        for(int i=0; i<s.size(); i++){
            if(m1.find(s[i]) != m1.end()){
                m1[s[i]]++;
            }
            m1.insert({s[i], 1});
        }

        for(int i=0; i<t.size(); i++){
            if(m2.find(t[i]) != m2.end()){
                m2[t[i]]++;
            }
            m2.insert({t[i], 1});
        }

        for(int i=0; i<s.size(); i++){
            if(m1[s[i]] == m2[s[i]]){
                continue;
            }
            else{
                return false;
            }
            
        }

        return true;
    }
};

int main(){
    Solution s;
    bool res = s.isAnagram("aakash", "haakas");
    cout<<res<<endl;
}