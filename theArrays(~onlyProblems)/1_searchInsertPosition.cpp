#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = nums[0];
        int ans = 0;
        
        if(target > st && nums.size() == 1){
            ans = 1;
        }
        
        for(int i=1; i<nums.size(); i++){
            
            if(st== target){
                ans = 0;
            }
            
            else if(nums[i] == target){
                ans = i;
            }
            
            else if(nums[i-1] < target && nums[i] > target){
                ans = i;
            }
            
            else if(nums[nums.size() - 1] < target){
                ans = nums.size();
            }    
            
        }
        
        return ans;
    }
      
};

int main(){
    vector<int> v1 = {1, 3, 5, 6};
    int target = 2;

    Solution s;
    int ans = s.searchInsert(v1, target);
    cout<<"The position is: "<<ans<<endl;
}