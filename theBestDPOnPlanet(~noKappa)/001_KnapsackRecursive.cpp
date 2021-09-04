#include<iostream>
#include<vector>
using namespace std;

int knapsackRecursive(vector<int> weight, vector<int> value, int KnapsackWeight, int numberOfItems){

    //step1: Identification of base case
    if(KnapsackWeight == 0 || numberOfItems == 0){
        return 0;
    }

    
    //step2: activitity diagram(Legal Weight)
    if(weight[numberOfItems -1] <= KnapsackWeight){
        return max(value[numberOfItems -1] + knapsackRecursive(weight, value, KnapsackWeight - weight[numberOfItems -1], numberOfItems-1),
                   knapsackRecursive(weight, value, KnapsackWeight, numberOfItems-1));
    }

    //(Illegal weight)
    else {
        return knapsackRecursive(weight, value, KnapsackWeight, numberOfItems-1);
    }
    
}

int main(){
    vector<int> weight = {31, 10, 20, 19, 4, 3, 6};
    vector<int> value = {70, 20, 39, 37, 7, 5, 10};
    int knapsackWeight = 50;
    int n = weight.size();

    cout<<"The maximum profit is: "<< knapsackRecursive(weight, value, knapsackWeight, n);


}