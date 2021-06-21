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

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

int search(int inOrder[], int start, int end, int current){
    for(int i=start; i<=end; i++){
        if(inOrder[i] == current){
            return i;
        }
        
    }
    return -1;
}


Node* treeBuilder(int postOrder[], int inOrder[], int start, int end){

    if(start > end){
        return NULL;
    }
    //keeping track of element at a position
    static int index = end;

    //making sure to store the data at the particular index in a variable so that we can make node with same data
    int current = postOrder[index];

    //decrementing the index so that we can continue the process with next element
    index--;

    Node* newNode = new Node(current);

    //condition for only a single element in array
    if(start == end){
        return newNode;
    }

    int position = search(inOrder, start, end, current);
    newNode->right = treeBuilder(postOrder, inOrder, position+1, end );
    newNode->left = treeBuilder(postOrder, inOrder, start, position-1);
    

    return newNode;

}

int main(){

    int postOrder[] = {40, 20, 50, 30, 10};
    int inorder[] = {40, 20, 10, 50, 30};
    Node* tree = treeBuilder(postOrder, inorder, 0, 4);
    inOrderTraversal(tree);

}