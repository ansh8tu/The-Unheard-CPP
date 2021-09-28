#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        //why unoredered set?
        //1. we care abput duplicacy so for that we needed a data structure which can confirm that an element is not present more than once
        //set will assure this but
        //2. we dont actually care about the order so thats why we won't use set rather we will use an unordered_set to make sure that we don't sort 

        unordered_set<int> s1;
        for(int i=0; i<nums.size(); i++){

            //checking that the element is present in set or not 
            if(s1.find(nums[i]) != s1.end()){
                return true;
            }
            //if not present then add it to the set for future
            s1.insert(nums[i]);
        }

        //if all goes right and you can't find the element in set then return false this means that you have traversed the whole array
        //but you didn't find any element twice 
        return false;
    }
};

int main(){
    vector<int> nums = {1, 2, 3, 1};
    Solution s;
    bool ans = s.containsDuplicate(nums);
    cout<<ans<<endl;
    
}