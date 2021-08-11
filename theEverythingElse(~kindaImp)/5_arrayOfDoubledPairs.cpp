#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> mapzy;

        //sort the arr
        sort(arr.begin(), arr.end());

        //in order to seperate the positive and negative integers
        int midDivision = lower_bound(arr.begin(), arr.end(), 0) - arr.begin(); 

        for(int i=0; i<midDivision; i++){
            if(mapzy.count(arr[i]*2)){
                mapzy[arr[i]*2]--;

                if(mapzy[arr[i]*2] == 0){
                    mapzy.erase(arr[i]*2);
                }

            } 
            else{
                mapzy[arr[i]]++;
            }
            
        }

        for(int i=arr.size() - 1; i>=midDivision; i--){
            if(mapzy.count(arr[i]*2)){
                mapzy[arr[i]*2]--;

                if(mapzy[arr[i]*2] == 0){
                    mapzy.erase(arr[i]*2);
                }

            } 
            else{
                mapzy[arr[i]]++;
            }
            
        }

        return mapzy.empty();

    }
};

int main(){
    vector<int> arr = {-4, -2, 2, 4};
    Solution s;
    cout << s.canReorderDoubled(arr);
}