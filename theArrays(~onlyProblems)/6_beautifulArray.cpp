#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> res;
        res.push_back(1);
        
        while(res.size() < n){
            vector<int> temp;
            
            for(int i=0; i<res.size(); i++){
                if(res[i]*2 - 1 <=n){
                    temp.push_back((res[i]*2 - 1));
                }
            }
                                   
            for(int i=0; i<res.size(); i++){
                if(res[i]*2 <=n){
                    temp.push_back((res[i])*2);
                }
            }                          
            res = temp;
            
        }
        return res;
    }
    
};

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    Solution s;
    vector<int> res = s.beautifulArray(n);

    cout<<"[";
    for(int i=0; i< res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<"]"<<endl;
}