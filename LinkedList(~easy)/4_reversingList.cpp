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

Node* reverseIterative(Node* &head){
    Node* prevPtr = NULL;
    Node* currPtr = head;
    Node* nextPtr = NULL;

    while(currPtr!=NULL){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

Node* reverseRecursive(Node* &head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    Node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
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

    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    printList(head);
    cout<<endl;

    Node* reversedHeadIterative = reverseIterative(head);
    printList(reversedHeadIterative);

    //Node* reversedHeadRecursive = reverseRecursive(head);
    
    

}