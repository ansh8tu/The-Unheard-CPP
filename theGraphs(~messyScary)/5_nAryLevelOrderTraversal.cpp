#include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<queue>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }    
};

Node* newNode(int val) {
    Node *temp = new Node;
    temp->val = val;
    return temp;
}


class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        
        if(!root){
            return result;
        }
        
        //as we need to perform a bfs we'll need a queue
        queue<Node*> que;
        que.push(root);
        
        //also now we have to store that value in a vector in order to push it into final result
        vector<int> temp = {root->val};
        
        //finally push it to the final answer and we'll repeat this process over and over 
        result.push_back(temp);
        
        //now lets loop through the queue and find the children of the node
        while(!que.empty()){
            
            temp.clear();
            
            //in order to do the bfs at every node we need to know how many nodes are present at that level
            int quePresentSize = que.size();
            
            while(quePresentSize--){
                Node* currentNode = que.front();
                que.pop();
                
                for(auto node : currentNode->children){
                    temp.push_back(node->val);
                    que.push(node);
                }
            }
            
            //in order to mae sure that we don't push null vector to the result
            if(temp.empty()){
                continue;
            }
            
            result.push_back(temp);
        }
        
        return result;
    }
};

int main(){

    //took the main()'s part frmon gfg
    Node* root = newNode(10);
    (root->children).push_back(newNode(2));
    (root->children).push_back(newNode(34));
    (root->children).push_back(newNode(56));
    (root->children).push_back(newNode(100));
    (root->children[0]->children).push_back(newNode(77));
    (root->children[0]->children).push_back(newNode(88));
    (root->children[2]->children).push_back(newNode(1));
    (root->children[3]->children).push_back(newNode(7));
    (root->children[3]->children).push_back(newNode(8));
    (root->children[3]->children).push_back(newNode(9));
    Solution s;
    vector<vector<int>> res = s.levelOrder(root);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}