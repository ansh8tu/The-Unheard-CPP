#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    vector<int> nums;
    
    Solution(vector<int>& nums) {
        this->nums = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> sol = nums;
        for(int i=0; i<sol.size(); i++){
            int random = i + rand() % (sol.size() - i);
            std::swap(sol[i], sol[random]);
        }
        
        return sol;
    }
};

int main(){
    vector<int> nums = {1, 2, 3, 4};
    Solution* obj = new Solution(nums);
    vector<int> param_1 = obj->reset();
    vector<int> param_2 = obj->shuffle();

    for(int i=0; i<param_2.size(); i++){
        cout<<param_2[i]<<" ";
    }
}