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

//O(n^2) approach
/*
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> newMat(m*n, 0);
        vector<vector<int>> res(r, vector<int>(c,0));

        //making sure that number of elements are same 
        if((m*n) != (r*c)){
            return mat;
        }

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                newMat[n*i+j] = mat[i][j];
            }
        }

        for(int i=0; i<newMat.size(); i++){
            res[i/c][i%c] = newMat[i];
        }
        
        return res;
    }
};
*/

//O(n) approach
class Solution{
    public:
     vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();

        if((m*n)!= (r*c)){
            return mat;
        }
             
        vector<vector<int>> res(r,vector<int>(c,0));

        for(int i=0; i<(m*n); i++){
            res[i/c][i%c]=mat[i/n][i%n];
        }

        return res; 
     }
};



int main(){
    Solution s;
    vector<vector<int>> mat = {{1,2,3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> res = s.matrixReshape(mat, 3, 3);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}