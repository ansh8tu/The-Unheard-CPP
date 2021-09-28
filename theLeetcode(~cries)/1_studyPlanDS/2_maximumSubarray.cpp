#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//Naive Approach - O(N^3)
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> f;
        vector<vector<int>> a;
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                vector<int> v;
                int sum =0;
                for(int k=i; k<=j; k++){
                    v.push_back(nums[k]);
                    sum+=nums[k];
                }
                f.push_back(sum);
                a.push_back(v);
            }
        }
        sort(f.begin(), f.end());
        return f[f.size() -1];
        
    }
};
*/


// Quadratic Time Approach - O(N^2)
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> sumTracker;
        for(int i=0; i<nums.size(); i++){
            int sum =0;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j];
                sumTracker.push_back(sum);
            }
        }
        
        sort(sumTracker.begin(), sumTracker.end());
        return sumTracker[sumTracker.size() -1];
    }
};

*/

//Kaden's Algorithm - Please try to understand that you must understand this in order to understand this you must understand the above two approaches else
//there's no point in looking at it 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currMaxSum = nums[0];

        for(int i=1; i<nums.size(); i++){
            currMaxSum = max(nums[i], currMaxSum + nums[i]);
            maxSum = max(maxSum, currMaxSum);
        }

        return maxSum;
    }
};


int main(){
    vector<int> nums = {1, 2, 3, 4};
    Solution s;
    int num =s.maxSubArray(nums);
    cout<<num;
}