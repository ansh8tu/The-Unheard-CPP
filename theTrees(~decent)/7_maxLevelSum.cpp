#include<iostream>
#include<queue>
#include<vector>
using namespace std;


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
    int maxLevelSum(TreeNode* root) {
        int currSum=0, maxSum= INT_MIN;
        int maxLevel=1, currLevel=1;

        queue<TreeNode*> que;
        que.push(root);
        que.push(NULL);

        while(!que.empty()){
            TreeNode* node = que.front();
            que.pop();

            if(node!=NULL){
                currSum+= node->val;

                if(node->left!=NULL){
                    que.push(node->left);
                }

                if(node->right!=NULL){
                    que.push(node->right);
                }
            }

            else{

                if(currSum > maxSum){
                    maxSum = currSum;
                    maxLevel = currLevel;
                }

                currLevel++;
                currSum = 0;

                if(!que.empty()){
                    que.push(NULL);
                }            
            }

        }
        return maxLevel;
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
    int level = s.maxLevelSum(root);
    cout<<level<<endl;

}