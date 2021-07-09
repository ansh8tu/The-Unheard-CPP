#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int occurences(vector<int> vec, int numToSearch){
    auto ub = upper_bound(vec.begin(), vec.end(), numToSearch);
    auto lb = lower_bound(vec.begin(), vec.end(), numToSearch);
    return (ub - lb);   
}

int main(){

    int size, result, numToSearch;
    vector<int> vec;

    cout<<"Enter the size of sorted array: ";
    cin>>size;

    for(int i=0; i<size; i++){
        int num;
        cout<<"Enter element at index "<<i<<": ";
        cin>>num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    cout<<"Enter the element whose occurences you want to search: ";
    cin>>numToSearch;

    result = occurences(vec, numToSearch);

    cout<<"The number of occurences of "<<numToSearch<<" are: "<<result;
    
}