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

bool detectCycle(Node* head){

    //base case
    if(head==NULL || head->next ==NULL){
        return false;
    }

    Node* slowPtr = head;
    Node* fastPtr = head;

    //if you are writing fastPtr->next!=NULL && fastPtr!=NULL then dont't try optimising it to this
    //else you'll get into troubles at LeetCode/CP

    //you'll get this kinda error
    //runtime error: member access within null pointer of type 'Node' (solution.cpp)
    //SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:25:24
    while(fastPtr->next && fastPtr){
        fastPtr= fastPtr->next->next;
        slowPtr = slowPtr->next;
        
        //cycle present if these two meet at any point
        if(fastPtr == slowPtr){
            return true;
        }
    }

    return false;


}

void removeCycle(Node* &head){
    Node* slowPtr = head;
    Node* fastPtr = head;

    do{
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    } while(fastPtr!=slowPtr);

    fastPtr = head;
    while(fastPtr->next != slowPtr->next){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }

    slowPtr->next = NULL;
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

    //to make a cycle in order to check that our code is working properly or not
    fifthNode->next = head;

    //detecting cycle
    cout<<detectCycle(head)<<endl;
    //once we've detected the loop lets remove it now 
    removeCycle(head);

    //lets check again
    cout<<detectCycle(head)<<endl;

    //now lets try printing it
    printList(head);

}