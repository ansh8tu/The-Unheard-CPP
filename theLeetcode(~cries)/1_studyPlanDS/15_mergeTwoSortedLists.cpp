#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<int,int> mi;
typedef unordered_map<int,int> umi;
typedef stack<int> st;
typedef queue<int> que;
typedef priority_queue<int> pq;


#define LOOP(i, a, b) for(int i = a; i<b; i++) 
#define ITLOOP(it, a, b) for(auto it=a; it!=b; it++)
#define F first
#define S second
#define PB push_back
#define MP make_pair


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newNode = new ListNode(-1);
        ListNode* track = newNode;

        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }

        while(l1!=NULL && l2!=NULL){
            if(l1->val >= l2->val){
                track->next = l2;
                track = l2;
                l2 = l2->next;

            }
            else{
                track->next = l1;
                track = l1;
                l1 = l1->next;
            }
        }

        if(l1 == NULL){
            track->next = l2;
        }

        if(l2 == NULL){
            track->next = l1;
        }

        return newNode->next;
    }
};

void printList(ListNode* node){
    while(node !=NULL){
        cout<<node->val<<"->";
        node = node->next;
    }
    cout<<"NULL";
}

int main(){
    ListNode* head1 = NULL;
    ListNode* firstNode1 = new ListNode(10);
    ListNode* secondNode1 = new ListNode(20);
    ListNode* thirdNode1 = new ListNode(30);
    ListNode* fourthNode1 = new ListNode(40);
    ListNode* fifthNode1 = new ListNode(50);

    head1 = firstNode1;
    firstNode1->next = secondNode1;
    secondNode1->next = thirdNode1;
    thirdNode1->next = fourthNode1;
    fourthNode1->next = fifthNode1;
    fifthNode1->next = NULL;

    ListNode* head2 = NULL;
    ListNode* firstNode2 = new ListNode(11);
    ListNode* secondNode2 = new ListNode(22);
    ListNode* thirdNode2 = new ListNode(33);
    ListNode* fourthNode2 = new ListNode(44);
    ListNode* fifthNode2 = new ListNode(55);

    head2 = firstNode2;
    firstNode2->next = secondNode2;
    secondNode2->next = thirdNode2;
    thirdNode2->next = fourthNode2;
    fourthNode2->next = fifthNode2;
    fifthNode2->next = NULL;

    Solution s;
    ListNode* head = s.mergeTwoLists(head1, head2);
    printList(head);

}