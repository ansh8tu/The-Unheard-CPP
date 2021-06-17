#include<iostream>
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

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";

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

    preOrderTraversal(root);
    cout<<endl;
    inOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);

}