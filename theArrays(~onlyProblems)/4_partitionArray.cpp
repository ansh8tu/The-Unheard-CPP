#include<iostream>
#include<vector>
using namespace std;

int partitionDisjoint(vector<int>& nums) {
    int maxElement = nums[0];
    int minElement = nums[0];
    int finalAns = 0;

    for(int i=1; i<nums.size(); i++){
        if(nums[i] < minElement){
            finalAns =i;
            minElement = maxElement;
        }
        maxElement = max(nums[i], maxElement);
    }
    return finalAns + 1;
    
}

int main(){
    vector<int> nums = {5, 0, 3, 8, 6};
    int sol = partitionDisjoint(nums);
    cout<<"The size of left subarray is: "<<sol<<endl;
}