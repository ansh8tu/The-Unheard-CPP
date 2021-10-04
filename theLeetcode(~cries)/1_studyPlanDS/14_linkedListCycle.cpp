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
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }

        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while(fastPtr->next!=NULL){
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;

            if(fastPtr==NULL){
                delete fastPtr, slowPtr;
                return false;
            }

            else if(fastPtr->next == slowPtr->next){
                delete fastPtr, slowPtr;
                return true;
            }
        }

        delete fastPtr, slowPtr;
        return false;
    }
};

int main(){
    ListNode* head = new ListNode(10);
    Solution s;
    bool res = s.hasCycle(head);
    cout<<res<<endl;
}