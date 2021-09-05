#include<iostream>
#include <cstring>
#include<vector>
using namespace std;

int dp[100][1000];

int knapsackRecursive(vector<int> weight, vector<int> value, int knapsackWeight, int numberOfItems){

    //step1: Identification of base case
    if(knapsackWeight == 0 || numberOfItems == 0){
        return 0;
    }

    if(dp[numberOfItems][knapsackWeight] != -1){
        return dp[numberOfItems][knapsackWeight];
    }
    //step2: activitity diagram(Legal Weight)
    if(weight[numberOfItems -1] <= knapsackWeight){
        return dp[numberOfItems][knapsackWeight] = max(value[numberOfItems -1] + knapsackRecursive(weight, value, knapsackWeight - weight[numberOfItems -1], numberOfItems-1),
                   knapsackRecursive(weight, value, knapsackWeight, numberOfItems-1));
    }

    //(Illegal weight)
    else {
        return dp[numberOfItems][knapsackWeight] = knapsackRecursive(weight, value, knapsackWeight, numberOfItems-1);
    }
    
}

int main(){
    vector<int> weight = {31, 10, 20, 19, 4, 3, 6};
    vector<int> value = {70, 20, 39, 37, 7, 5, 10};
    int knapsackWeight = 50;
    int n = weight.size();
    memset(dp, -1, sizeof(dp));

    cout<<"The maximum profit is: "<< knapsackRecursive(weight, value, knapsackWeight, n);


}