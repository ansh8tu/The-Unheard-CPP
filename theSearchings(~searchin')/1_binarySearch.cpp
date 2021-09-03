//pr: array must be sorted

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> elements, int elementToSearch){
    int low = 0;
    int high = elements.size() - 1;
    

    while(low<=high){
        
        int mid = high - ((high-low)/2);

        if(elements[mid] == elementToSearch){
            return mid;
        }

        else if(elements[mid] < elementToSearch){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    return -1;

}


int main(){
    vector<int> elements;//[10, 5, 3, 1, 4]
    int numberOfElements, elementToSearch, indexOfElement;

    cout<<"Enter the number of elements in vector: ";
    cin>>numberOfElements;

    for(int i=0; i<numberOfElements; i++){
        int inputNum;
        cin>>inputNum;
        elements.push_back(inputNum);
    }

    sort(elements.begin(), elements.end());

    cout<<"Enter the element you want to search: ";
    cin>> elementToSearch;

    indexOfElement = binarySearch(elements, elementToSearch);

    if(indexOfElement == -1){
        cout<<"Element not Found!"<<endl;
    } 
    
    else {
        cout<<"Element found at: "<<indexOfElement<<endl;
    }

}