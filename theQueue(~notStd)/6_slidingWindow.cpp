#include<iostream>
#include<deque>
#include<vector>
using namespace std;


vector<int> maxSlidingWIndow(vector<int> &v1, int k ){
    deque<int> dq;
    vector<int> finalSol;

    for(int i=0; i<v1.size(); i++){

        //pop when deque isn't empty and when the front index runs outs of the specified size!
        if(!dq.empty() && dq.front() == (i-k)){
            dq.pop_front();
        }
        
        while((!dq.empty()) && v1[i] > v1[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);

        if((i+1) >= k){
            finalSol.push_back(v1[dq.front()]);
        }

    }

    return finalSol;

}

int main(){

    vector<int> v1 = {1,3,-1,-3,5,3,6,7};
    vector<int> v2 = maxSlidingWIndow(v1, 3);

    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }

    
}