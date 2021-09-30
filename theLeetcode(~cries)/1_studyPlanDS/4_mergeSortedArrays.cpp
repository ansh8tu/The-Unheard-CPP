#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptrOne = m-1;
        int ptrTwo = n-1;
        int i = m + n -1;

        while(ptrTwo >=0){
            if(ptrOne >= 0 && (nums1[ptrOne] > nums2[ptrTwo])){
                nums1[i--] = nums1[ptrOne--];
                
            }
            else{
                nums1[i--] = nums2[ptrTwo--];
            }
        }
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0} ;
    vector<int> nums2 = {2,5,6} ;
    s.merge(nums1, 3, nums2, 3);
}