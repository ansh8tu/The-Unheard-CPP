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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            return targetSum - root->val == 0;
        }

        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};

int main(){
    TreeNode* root = NULL;
    TreeNode* firstNode = new TreeNode(5);
    TreeNode* secondNode = new TreeNode(4);
    TreeNode* thirdNode = new TreeNode(8);
    TreeNode* fourthNode = new TreeNode(11);
    TreeNode* fifthNode = new TreeNode(7);
    TreeNode* sixthNode = new TreeNode(2);
    TreeNode* seventhNode = new TreeNode(13);
    TreeNode* eighthNode = new TreeNode(4);
    TreeNode* ninthNode = new TreeNode(1);

    root = firstNode;
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    fourthNode->left = fifthNode;
    fourthNode->right = sixthNode;

    thirdNode->left = seventhNode;
    thirdNode->right = eighthNode;

    eighthNode->right = ninthNode;

    Solution s;
    bool res = s.hasPathSum(root, 30);
    cout<<res<<endl;
}