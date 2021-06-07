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

Node* deleteNode(Node* &head, int whereToDelete){
    Node* temp = head;
    int counter = 1;

    if(whereToDelete == 1){
        head = temp->next;
        head->previous = NULL;
        delete temp;
    }

    while(temp!=NULL && counter!= whereToDelete){
        temp=temp->next;
        counter++;
    }

    temp->previous->next = temp->next;

    if(temp->next!=NULL){
        temp->next->previous = temp->previous;
    }
        
    delete temp;
    return head;

}

int main(){
    int whereToDelete;
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

    cout<<"Enter the position where you want to delete: ";
    cin>>whereToDelete;

    cout<<"Before deletion at " << whereToDelete <<":"<<endl;
    printList(head);
    cout<<endl;
    
    cout<<"After deletion at " << whereToDelete <<":"<<endl;
    deleteNode(head,whereToDelete);
    printList(head);


}