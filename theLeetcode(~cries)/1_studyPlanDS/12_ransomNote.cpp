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
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m1;
        map<char, int> m2;

        for(int i=0; i<ransomNote.size(); i++){
            if(m1.find(ransomNote[i]) != m1.end()){
                m1[ransomNote[i]]++;
            }
            m1.insert({ransomNote[i], 1});
        }

        for(int i=0; i<magazine.size(); i++){
            if(m2.find(magazine[i]) != m2.end()){
                m2[magazine[i]]++;
            }
            m2.insert({magazine[i], 1});
        }

        for(int i=0; i<ransomNote.size(); i++){
            if(m1[ransomNote[i]] <= m2[ransomNote[i]]){
                m1[ransomNote[i]]--;
                m2[ransomNote[i]]--;
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
    bool res = s.canConstruct("a", "b");
    cout<<res<<endl;
}