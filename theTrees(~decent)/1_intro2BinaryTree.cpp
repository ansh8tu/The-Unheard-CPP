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

void printLeft(Node* node){
    while(node!=NULL){
        cout<<" "<<node->data<<endl;
        cout<<"/"<<endl;
        node = node->left;
    }    
    cout<<"NULL"<<endl;
}

void printRight(Node* node){
    while(node!=NULL){
        cout<<node->data<<" "<<endl;
        cout<<"\\"<<endl;
        node = node->right;
    }    
    cout<<"NULL"<<endl;
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

    printLeft(root);
    cout<<endl;
    printRight(root);

}