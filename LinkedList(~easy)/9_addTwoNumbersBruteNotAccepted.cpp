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

int convertToOriginalNumber(ListNode* l1){
    stack<int> stackzy;
    vector<int> v;
    string num;
    long long  finalNum;

    while(l1!=NULL){
        stackzy.push(l1->val);
        l1 = l1->next;
    }

    while(!stackzy.empty()){
        v.push_back(stackzy.top());
        stackzy.pop();
    }

    for(int i=0; i<v.size(); i++){
        num+= to_string(v[i]);
    }

    finalNum = stoi(num);
    return finalNum;

}

void insertBegin(ListNode* &head, int valToInsert){
    ListNode* nodeToAdd = new ListNode(valToInsert);
    nodeToAdd->next = head;
    head = nodeToAdd;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int numOnL1 = convertToOriginalNumber(l1);
    int numOnL2 = convertToOriginalNumber(l2);
    int sum = numOnL1 + numOnL2;
    string sumzy = to_string(sum);//807

    ListNode* ans = NULL;

    for(int i=0; i<sumzy.length(); i++){
        insertBegin(ans, sumzy[i] - '0');
    }

    return ans;
}

void printList(ListNode* node){
    while(node !=NULL){
        cout<<node->val<<"->";
        node = node->next;
    }
    cout<<"NULL";
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


