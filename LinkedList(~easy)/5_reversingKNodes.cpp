#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int valueToStore){
            data = valueToStore;
            next = NULL;
        }
};

Node* reverseKNodes(Node* &head, int k){
    Node* prevNode = NULL;
    Node* currNode = head;
    Node* nextNode = NULL;

    //counter to check how many nodes to reverse iteratively
    int count=0;

    while(currNode!=NULL && count<k){
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
        count++;
    }

    if(nextNode!= NULL){
    head->next = reverseKNodes(nextNode, k);
    }

    return prevNode;
}

void printList(Node* node){
    while(node !=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = NULL;
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);
    Node* fourthNode = new Node(40);
    Node* fifthNode = new Node(50);

    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = NULL;

    printList(head);
    cout<<endl;

    Node* newHead = reverseKNodes(head, 3);
    printList(newHead);
    cout<<endl;
}