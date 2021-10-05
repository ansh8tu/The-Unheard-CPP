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
    ListNode* reverseList(ListNode* &head) {
        ListNode* prevPtr = NULL;
        ListNode* currPtr = head;
        ListNode* nextPtr = NULL;

        while(currPtr!=NULL){
            nextPtr = currPtr->next;
            //actually reversing the link
            currPtr->next = prevPtr;
            prevPtr = currPtr;
            currPtr = nextPtr;
        }
        return prevPtr;
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
    ListNode* head = NULL;
    ListNode* firstNode = new ListNode(10);
    ListNode* secondNode = new ListNode(20);
    ListNode* thirdNode = new ListNode(30);

    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    printList(head);
    cout<<endl;

    Solution s;
    ListNode* newHead = s.reverseList(head);
    printList(newHead);

}