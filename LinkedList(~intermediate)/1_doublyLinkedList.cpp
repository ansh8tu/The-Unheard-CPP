#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* previous;
        Node* next;

    public:
        Node(int valToStore){
            data = valToStore;
            next =NULL;
            previous = NULL;
        }
};

void printList(Node* node){
    while(node !=NULL){
        cout<<node->data<<"<=>";
        node = node->next;
    }
    cout<<"NULL";
}


Node* insertAtTail(Node* &head, int valToStore){
    Node* nodeToAdd = new Node(valToStore);
    Node* temp= head;

    if(head==NULL){
        head = nodeToAdd;
    }

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = nodeToAdd;
    nodeToAdd->previous = temp;

    return head;
}

Node* insertAtHead(Node* &head, int valToStore){
    Node* nodeToAdd =  new Node(valToStore);
    nodeToAdd->next = head;

    if(head->previous!=NULL){
        head->previous = nodeToAdd;
    }

    head = nodeToAdd;
    return head;
}


int main(){
    Node* head = NULL;
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);

    head = firstNode;

    firstNode->previous = NULL;
    firstNode->next = secondNode;
    
    secondNode->previous = firstNode;
    secondNode->next = thirdNode;

    thirdNode->previous = secondNode;
    thirdNode->next = NULL;

    cout<<"Before Insertion at tail:"<<endl;
    printList(head);

    cout<<endl;
    insertAtTail(head, 40);
    cout<<"After Insertion at tail:"<<endl;
    printList(head);

    cout<<endl;
    insertAtHead(head, 0);
    cout<<"After Insertion at head:"<<endl;
    printList(head);



}