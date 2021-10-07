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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    
    void dummyVector(TreeNode* root, vector<int> &sol){
        if(root == NULL){
            return;
        }
        
        sol.push_back(root->val);
        dummyVector(root->left, sol);
        dummyVector(root->right, sol);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> finalSol;
        dummyVector(root, finalSol);
        return finalSol;
    }
};

int main(){
    TreeNode* root = NULL;
    TreeNode* firstNode = new TreeNode(10);
    TreeNode* secondNode = new TreeNode(20);
    TreeNode* thirdNode = new TreeNode(30);
    TreeNode* fourthNode = new TreeNode(40);
    TreeNode* fifthNode = new TreeNode(50);
    TreeNode* sixthNode = new TreeNode(60);
    TreeNode* seventhNode = new TreeNode(70);

    root = firstNode;
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;

    Solution s;
    vi v = s.preorderTraversal(root);
    LOOP(i, 0, v.size()){
        cout<<v[i]<<" ";
    }

}