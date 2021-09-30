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

//solving for leetcode that's why i didn't use the typedefs
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mOne;
        vector<int> res;

        for(int i=0; i<nums1.size(); i++){
            mOne[nums1[i]]++;
        }

        for(int i=0; i<nums2.size(); i++){
            if(mOne[nums2[i]] > 0){
                res.push_back(nums2[i]);
                mOne[nums2[i]]--;
            }
        }

        return res;
    }

};

int main(){
    vi nums1 = {6, 4, 9, 5, 6, 6};
    vi nums2 = {9, 4, 9, 8, 4, 6, 6};
    Solution s;
    vi sol = s.intersect(nums1, nums2);
    LOOP(i, 0, sol.size()){
        cout<<sol[i]<<" ";
    }

}