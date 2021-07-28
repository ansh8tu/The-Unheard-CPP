#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int minValue = INT_MAX, newResult, result;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<nums.size()-2; i++){
        if(i == 0 || nums[i] != nums[i-1]){
            int low = i+1;
            int high = nums.size() - 1;

            while(low<high){
                newResult = nums[i] + nums[low] + nums[high];

                if(newResult == target){
                    return newResult;
                }

                else if(newResult > target){
                    high--;
                }

                else{
                    low++;
                }

                if(abs(newResult - target) < minValue){
                    result = newResult;
                    minValue = abs(newResult - target);
                }
            }
        }         
    }
    return result;     
}


int main(){

    vector<int> nums = {1,2,4,8,16,32,64,128};
    int target = 82;
    
    int result = threeSumClosest(nums, target);
    cout<<result<<endl;
}