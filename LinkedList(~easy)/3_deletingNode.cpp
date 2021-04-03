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

void deleteAtHead(Node* &head){
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deleteNode(Node* &head, int whereToDelete){
    if(head == NULL){
        return;
    }

    if(whereToDelete == 0){
       deleteAtHead(head);
       return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    Node* temp = head;

    while(whereToDelete!=1){
        temp=temp->next;
        whereToDelete--;
    }
    Node* temp2 = temp->next;
    temp->next = temp->next->next;
    //temp->next->next = NULL;
    delete temp2;

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

    deleteNode(head, 0);
    printList(head);
    cout<<endl;
    
    

}