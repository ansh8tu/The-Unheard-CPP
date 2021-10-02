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

/*O(n^2) approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v(n*m, 0);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                v[i*m + j] = matrix[i][j];
            }
        }
        
        return binary_search(v.begin(), v.end(), target);
    }
};
*/

//O(n) approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v(n*m, 0);

        for(int i=0; i<n*m; i++){
            v[i] = matrix[i/m][i%m];
        }
        
        return binary_search(v.begin(), v.end(), target);
    }
};

int main(){
    Solution s;
    vvi matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 3;
    bool res = s.searchMatrix(matrix, target);
    cout<<res<<endl;
}