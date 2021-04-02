//this is the layman's way of making and printing a linked list, 

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int valueToStore){
            data= valueToStore;
            next = NULL;
        }
};

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

    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = NULL;

    printList(head);

}