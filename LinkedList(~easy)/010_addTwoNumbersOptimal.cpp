#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* node){
    while(node !=NULL){
        cout<<node->val<<"->";
        node = node->next;
    }
    cout<<"NULL";
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode();
    ListNode* temp = head;
    int carry = 0;
        
    while(l1!=NULL || l2!=NULL || carry){
        int addNum = 0;
        if(l1!=NULL){
            addNum+=l1->val;
            l1=l1->next;
        }
            
        if(l2!=NULL){
            addNum+=l2->val;
            l2=l2->next;
        }
            
        addNum+=carry;
        carry = addNum/10;
        ListNode* newNode = new ListNode(addNum%10);
        temp->next = newNode;
        temp = temp->next;
    }
    
    return head->next;
}


int main(){

    ListNode* headOne = NULL;
    ListNode* firstNodeOne = new ListNode(2);
    ListNode* secondNodeOne = new ListNode(4);
    ListNode* thirdNodeOne = new ListNode(3);

    headOne = firstNodeOne;
    firstNodeOne->next = secondNodeOne;
    secondNodeOne->next = thirdNodeOne;
    thirdNodeOne->next = NULL;

    ListNode* headTwo = NULL;
    ListNode* firstNodeTwo = new ListNode(5);
    ListNode* secondNodeTwo = new ListNode(6);
    ListNode* thirdNodeTwo = new ListNode(4);

    headTwo = firstNodeTwo;
    firstNodeTwo->next = secondNodeTwo;
    secondNodeTwo->next = thirdNodeTwo;
    thirdNodeTwo->next = NULL;

    ListNode* l1 = addTwoNumbers(headOne, headTwo);
    printList(l1);
    
}