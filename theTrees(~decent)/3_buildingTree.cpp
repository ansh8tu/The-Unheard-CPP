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

int search(int inOrder[], int start, int end, int current){
    for(int i=start; i<=end; i++){
        if(inOrder[i] == current){
            return i;
        }
        
    }
    return -1;
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

Node* treeBuilder(int preOrder[], int inOrder[], int start, int end){

    if(start > end){
        return NULL;
    }
    //keeping track of element at a position
    static int index = 0;

    //making sure to store the data at the particular index in a variable so that we can make node with same data
    int current = preOrder[index];

    //incrementing the index so that we can continue the process with next element
    index++;

    Node* newNode = new Node(current);

    //condition for only a single element in array
    if(start == end){
        return newNode;
    }

    int position = search(inOrder, start, end, current);
    newNode->left = treeBuilder(preOrder, inOrder, start, position-1);
    newNode->right = treeBuilder(preOrder, inOrder, position+1, end );

    return newNode;

}

int main(){

    int preOrder[] = {10, 20, 40, 30, 50};
    int inorder[] = {40, 20, 10, 50, 30};
    Node* tree = treeBuilder(preOrder, inorder, 0, 4);
    inOrderTraversal(tree);

}