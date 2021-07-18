#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> v3;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    if(n == 0 || n ==1){
        return v3;
    }
    
    for(int i=0; i<nums.size() - 2 ; i++){
        if(i==0 || (i>0 && nums[i] != nums[i-1])){
            int low = i+1;
            int high = n - 1;

            while(low<high){
                int curr = nums[i] + nums[low] + nums[high];

                if(curr ==0){
                    v3.push_back({nums[i], nums[low], nums[high]});
                    while(low<high && nums[low] == nums[low+1]){
                        low++;
                    }
                    while(low<high && nums[high] == nums[high-1]){
                        high--;
                    }
                    low++;
                    high--;
                }

                else if(curr<0){
                    low++;
                }
                else{
                    high--;
                }
            }
        }    
    }
    return v3;
}


int main(){
    vector<int> v1 = {-1,0,1,2,-1,-4};
    vector<vector<int>> v2 = threeSum(v1);

    for(int i=0; i<v2.size(); i++){
        for(int j=0; j<v2[i].size(); j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
}