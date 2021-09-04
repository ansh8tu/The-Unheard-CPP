#include<iostream>
#include<vector>
using namespace std;

class Solution {
    
    int firstElement(vector<int>& nums, int target) {
        int size = nums.size();
        int first = size;
        int low = 0;
        int high = size - 1;
        
        while(low<=high){
        
            int mid = high - ((high-low)/2);

            if(nums[mid] >= target){
                first = mid;
                high = mid -1;
            }

            else {
                low = mid + 1;
            }
            
        }

        return first;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstElement(nums, target);
        int last = firstElement(nums, target + 1) - 1;
        
        if(first <= last){
            return {first, last};
        }
        return {-1, -1};
        
    }
};

int main(){
    Solution s;
    vector<int> v = {5,7,7,8,8,10};
    vector<int> num = s.searchRange(v, 8);

    for(int i=0; i<num.size(); i++){
        cout<< num[i]<<" ";
    }
}