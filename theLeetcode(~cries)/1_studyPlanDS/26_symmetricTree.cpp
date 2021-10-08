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
    bool dummyCheck(TreeNode* t1, TreeNode* t2){

        if(t1!=NULL && t2!=NULL){
            bool checkOne = (t1->val == t2->val);
            bool checkTwo = dummyCheck(t1->left, t2->right);
            bool checkThree = dummyCheck(t1->right, t2->left);
        
            if(checkOne && checkTwo && checkThree){
                return true;
            }
            else{
                return false;
            }
        }

        else if(t1==NULL && t2 == NULL){
            return true;
        }

        else{
            return false;
        }
        
    }

    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL){
            return true;
        }

        return dummyCheck(root->left, root->right);
        
    }
};

int main(){
    TreeNode* root = NULL;
    TreeNode* firstNode = new TreeNode(10);
    TreeNode* secondNode = new TreeNode(20);
    TreeNode* thirdNode = new TreeNode(20);
    TreeNode* fourthNode = new TreeNode(40);
    TreeNode* fifthNode = new TreeNode(50);
    TreeNode* sixthNode = new TreeNode(50);
    TreeNode* seventhNode = new TreeNode(40);

    root = firstNode;
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;

    Solution s;
    bool res = s.isSymmetric(root);
    cout<<res<<endl;

}