#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockSpan(vector<int> v){
    vector<int> res;
    stack<pair<int, int>> stackzy;
    

    for(int i=0; i<v.size(); i++){
        int day = 1;
        while(!stackzy.empty() && v[i] >= stackzy.top().first){
            day += stackzy.top().second;
            stackzy.pop();
        }
        stackzy.push({v[i], day});
        res.push_back(day);
    }
    return res;

}

int main(){
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    vector<int> r = stockSpan(v);

    for(int i=0; i<r.size(); i++){
        cout<<r[i]<<" ";
    }
}