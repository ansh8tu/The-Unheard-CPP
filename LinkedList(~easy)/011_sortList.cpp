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

class Solution{
public:
    ListNode* sortList(ListNode* &head){
        vector<int> v;
        ListNode* temp = head;
    
        while(temp !=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        sort(v.begin(), v.end());

        ListNode* newList = new ListNode(v[0]);
        ListNode* temp2 = newList;

        for(int i=1; i<v.size(); i++){
            ListNode* newNode = new ListNode(v[i]);
            temp2->next = newNode;
            temp2 = newNode;
        }

        return newList;
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
    ListNode* firstNode = new ListNode(1);
    ListNode* secondNode = new ListNode(7);
    ListNode* thirdNode = new ListNode(3);
    ListNode* fourthNode = new ListNode(9);
    ListNode* fifthNode = new ListNode(2);

    head = firstNode;
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = NULL;

    Solution s;
    ListNode* h = s.sortList(head);
    printList(h);
}

