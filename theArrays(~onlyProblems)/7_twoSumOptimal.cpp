#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> mapzy;
        vector<int> v;

        for(int i=0; i<nums.size(); i++){
            if(mapzy.find(target - nums[i]) != mapzy.end()){
                v.push_back(mapzy[target - nums[i]]);
                v.push_back(i);
                break;
            }
            else{
                mapzy[nums[i]] = i;
            }    
        }
        return v;
    }

int main(){
    vector<int> nums = {2, 7, 3, 6};
    int target = 9;
    vector<int> sol = twoSum(nums, target);

    for(int i=0; i<sol.size(); i++){
        cout<<sol[i]<<" ";
    }

}