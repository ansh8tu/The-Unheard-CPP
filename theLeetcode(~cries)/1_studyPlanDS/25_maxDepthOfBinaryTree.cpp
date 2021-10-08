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
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root == NULL){
            return {};
        }

        vector<int> v;
        vector<vector<int>> res;

        queue<TreeNode*> que;
        que.push(root);
        que.push(NULL);

        while(!que.empty()){
            TreeNode* n = que.front();
            que.pop();
            
            
            if(n!=NULL){
                v.push_back(n->val);

                if(n->left!=NULL){
                    que.push(n->left);
                }

                if(n->right!=NULL){
                    que.push(n->right);
                }

            }

            else {
                res.push_back(v);
                v.clear();
                if(!que.empty()){
                    que.push(NULL);
                }
                
            }

        }

        return res;
    }
    
    int maxDepth(TreeNode* root) {
        vector<vector<int>> vec = levelOrder(root);
        return vec.size();
    }

    //also there's this 1 liner dfs approach that you should learn for O(d) space complexity
    // 1 + max(maxDepth(root->left), maxDepth(root->right))
    
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
    int res = s.maxDepth(root);
    cout<<res<<endl;

}