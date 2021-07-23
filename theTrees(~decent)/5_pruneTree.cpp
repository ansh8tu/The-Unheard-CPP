#include<iostream>
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}

};
 
class Solution {

public:
    Node* pruneTree(Node* root) {
        if(root == NULL){
            return NULL;
        }
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if(root->val == 0 && root->left == NULL && root->right == NULL){
            root = NULL;
        }
        
        return root;
    }
};

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

int main(){
    Node* root = NULL;
    Node* firstNode = new Node(1);
    Node* secondNode = new Node(0);
    Node* thirdNode = new Node(1);
    Node* fourthNode = new Node(0);
    Node* fifthNode = new Node(0);
    Node* sixthNode = new Node(0);
    Node* seventhNode = new Node(1);

    root = firstNode;
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;

    Solution s;
    Node* res = s.pruneTree(root);
    preOrderTraversal(res);
}