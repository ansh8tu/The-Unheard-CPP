#include<iostream>
using namespace std;


int maxNum(int numOne, int numTwo){
    if(numOne > numTwo){
        return numOne;
    }
    else{
        return numTwo;
    }
}

int maxContSubarray(int array[], int size){

    int maxSum =  array[0];
    int currSum =  array[0];

    for(int i=1; i<size; i++){
        currSum = maxNum(array[i], array[i] + currSum);  
        maxSum = maxNum(currSum, maxSum);
    }

    return maxSum;

}


int main(){

    int size, array[100];

    cout<<"Enter the size of array: ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"Enter Element at index "<<i<<": ";
        cin>>array[i];
    }

    int maxSum = maxContSubarray(array, size);
    cout<<"The maximum sum is: "<<maxSum<<endl;


}