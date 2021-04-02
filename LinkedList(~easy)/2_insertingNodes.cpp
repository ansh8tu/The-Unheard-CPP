//This is the code for insertion at start, end or any position

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

void insertBegin(Node* &head, int valToInsert){
    Node* nodeToAdd = new Node(valToInsert);
    nodeToAdd->next = head;
    head = nodeToAdd;
}

void insertEnd(Node* &head, int valToInsert){
    Node* nodeToAdd = new Node(valToInsert);
    if(head == NULL){
        head = nodeToAdd;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->next = nodeToAdd;
}

void insertAnywhere(Node* &head, int valToInsert, int whereToInsert){
    Node* nodeToAdd = new Node(valToInsert);
    Node* temp = head;
    //whereToInsert--;(keep only if someone says array's index starts from zero)
    while(whereToInsert !=1){
        temp = temp->next;
        whereToInsert--;
    }

    nodeToAdd->next = temp->next;
    temp->next = nodeToAdd;
}

void printList(Node* node){
    while(node !=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}

int main(){
    int position;
    Node* head = NULL;
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);

    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    printList(head);
    cout<<endl;

    insertBegin(head, 70);
    printList(head);
    cout<<endl;

    cout<<"Enter the place where you want to insert the node(starting index is 0): ";
    cin>>position;
    insertAnywhere(head, 40, position);
    printList(head);
    cout<<endl;

    insertEnd(head, 50);
    printList(head);
    cout<<endl;
}