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

int diameterOfTree(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }

    int leftHeight=0; 
    int rightHeight = 0;
    int leftDiameter = diameterOfTree(root->left, &leftHeight);
    int rightDiameter = diameterOfTree(root->right, &rightHeight);

    int currDiameter = leftHeight + rightHeight + 1;
    *height = max(leftHeight, rightHeight) + 1;

    return max(currDiameter, max(leftDiameter, rightDiameter));


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

    int height = 0;
    int d = diameterOfTree(root, &height);
    cout<<d<<endl;

}