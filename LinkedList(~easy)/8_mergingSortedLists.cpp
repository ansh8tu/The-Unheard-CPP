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

Node* mergeLists(Node* &head1, Node* &head2) {
    Node* dummyNode = new Node(-1);
    Node* curr = dummyNode;
    
    if(head1==NULL){
        return head2;
    }
    
    if(head2==NULL){
        return head1;
    }
    
    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
            curr->next = head1;
            curr=head1;
            head1 = head1->next;
        }
        
        else{
            curr->next = head2;
            curr = head2;
            head2 = head2->next;
        }
    }
    
    if(head1!=NULL){
        curr->next=head1;
    }
    
    if(head2!=NULL){
        curr->next = head2;
    }
    
    return dummyNode->next;
}

void printList(Node* node){
    while(node !=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head1 = NULL;
    Node* firstNode1 = new Node(10);
    Node* secondNode1 = new Node(20);
    Node* thirdNode1 = new Node(30);
    Node* fourthNode1 = new Node(40);
    Node* fifthNode1 = new Node(50);

    head1 = firstNode1;
    firstNode1->next = secondNode1;
    secondNode1->next = thirdNode1;
    thirdNode1->next = fourthNode1;
    fourthNode1->next = fifthNode1;
    fifthNode1->next = NULL;

    Node* head2 = NULL;
    Node* firstNode2 = new Node(11);
    Node* secondNode2 = new Node(22);
    Node* thirdNode2 = new Node(33);
    Node* fourthNode2 = new Node(44);
    Node* fifthNode2 = new Node(55);

    head2 = firstNode2;
    firstNode2->next = secondNode2;
    secondNode2->next = thirdNode2;
    thirdNode2->next = fourthNode2;
    fourthNode2->next = fifthNode2;
    fifthNode2->next = NULL;

    cout<<"List 1: ";
    printList(head1);
    cout<<endl;

    cout<<"List 2: ";
    printList(head2);
    cout<<endl;

    cout<<"Merged List: ";
    Node* newHead = mergeLists(head1, head2);
    printList(newHead);

}