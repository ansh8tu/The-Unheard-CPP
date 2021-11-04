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
    int res = 0;
    void sumLeft(TreeNode* root, int dir){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            if(dir == 0){
                res += root->val;
            }
        }
        sumLeft(root->left, 0);;
        sumLeft(root->right, 1);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        sumLeft(root, -1);
        return res;

    }
};

int main(){
    TreeNode* root = NULL;
    TreeNode* firstNode = new TreeNode(1);
    TreeNode* secondNode = new TreeNode(2);
    TreeNode* thirdNode = new TreeNode(3);
    TreeNode* fourthNode = new TreeNode(4);
    TreeNode* fifthNode = new TreeNode(5);
    TreeNode* sixthNode = new TreeNode(6);
    TreeNode* seventhNode = new TreeNode(7);

    root = firstNode;
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;

    Solution s;
    cout<<s.sumOfLeftLeaves(root)<<endl;

}