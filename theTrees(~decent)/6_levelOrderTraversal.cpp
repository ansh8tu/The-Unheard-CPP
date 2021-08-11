#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

public:
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> que;
    que.push(root);
    que.push(NULL);

    while(!que.empty()){
        Node* node = que.front();
        que.pop();

        if(node != NULL){
            cout<< node->data <<" ";

            if(node->left!=NULL){
                que.push(node->left);
            }

            if(node->right!=NULL){
                que.push(node->right);
            }
        }

        else if(!que.empty()){
            que.push(NULL);
        }
    }
}


int main(){
    Node* root = NULL;
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);
    Node* fourthNode = new Node(40);
    Node* fifthNode = new Node(50);
    Node* sixthNode = new Node(60);
    Node* seventhNode = new Node(70);

    root = firstNode;
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;

    levelOrderTraversal(root);

}