#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> mapzy;
        for(int i=0; i<nums.size(); i++){
            if(mapzy.find(target - nums[i]) != mapzy.end()){
                return {mapzy[target - nums[i]], i};
            }
            mapzy.insert({nums[i], i});
        }
        return {};
    }
};

int main(){
    Solution s;
    vector<int> nums = {2, 7, 11, 15} ;
    vector<int> v = s.twoSum(nums, 9);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<", ";
    }
}