#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> &nums){
    //step-1 : get the max and min from the array to know the range of elements
    int numSize = nums.size();
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for(int i=0; i<numSize; i++){
        maxVal = max(nums[i], maxVal);
        minVal = min(nums[i], minVal);
    }

    //step-2: get the range i.e., the array indexes 
    int rangeOfElements = maxVal - minVal + 1;

    //step-3: create a vector and store the frequency of the elements 
    vector<int> res(rangeOfElements, 0);

    for(int i=0; i<numSize; i++){
        res[nums[i] - minVal]++;
    }

    //step-4: create a prefix sum array to store the last index of the elements
    for(int i=1; i<rangeOfElements; i++){
        res[i] += res[i-1];
    }

    //step-5: subtracting 1 from each index to get the zero based index values 
    for(int i=0; i<rangeOfElements; i++){
        res[i] -= 1;
    }

    //step-6: finally start traversing the actual array from nums and allocate the positions to it
    vector<int> ans(numSize, 0);

    for(int i = numSize - 1; i>=0; i--){
        ans[res[(nums[i] - minVal)]] = nums[i];
        res[(nums[i] - minVal)]--;
    }

    return ans;

}

void printNums(vector<int> nums){
    cout << "[ ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    vector<int> nums = {9, 6, 3, 5, 3, 4, 3, 9, 6, 4, 6, 5, 8, 9, 9};
    vector<int> res = countingSort(nums);
    printNums(res);
    
    return 0;


}