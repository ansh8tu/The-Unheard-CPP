/*

WHAT YOU'LL FIND HERE, 🤓🧐 ?

1. Creating Vectors
2. Adding elements to vector
3. Printing vector on screen
4. Sorting Vector using <algorithm>
5. Performing binary search
6. Iterators in vectors
7. Sorting elements in descending order
8. Conclusion

*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int decFun(int x, int y){
    return x>y;
}

int main(){

    //1
    vector<int> numbers = {10, 2 ,11, 4};

    //2
    numbers.push_back(12);
    numbers.push_back(12);
    numbers.push_back(13);

    //3
    cout<<"Before sorting : "<<endl;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers.at(i)<<"\t";
    }

    //4
    //O(nLogn) time complexity
    sort(numbers.begin(), numbers.end()); 
    
    cout<<endl;
    cout<<"After sorting : "<<endl;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers.at(i)<<"\t";
    }
    cout<<endl;

    cout<<endl;
    int numberToSearch;
    cout<<"Enter any number that you want to search : ";
    cin>>numberToSearch;

    //5
    bool numberPresent = binary_search(numbers.begin(), numbers.end(), numberToSearch);

    if(numberPresent == 1){
        for(int i=0; i<numbers.size(); i++){
            if(numbers.at(i) == numberToSearch){
                cout<<"Number present at index : "<<i<<endl;
            }
        }
    }
    else{
        cout<<"Number Not Present!"<<endl;
    }

    //6
    //use only when the array is sorted in ascending order 
    //points to first occurence of numberToSearch
    vector<int>::iterator numL = lower_bound(numbers.begin(), numbers.end(), numberToSearch);

    //points to last occurence of numberToSearch + 1 th index
    //you can also use auto it will do just the same 
    vector<int>::iterator numP = upper_bound(numbers.begin(), numbers.end(), numberToSearch);

    cout<<"The number of occurences of "<<numberToSearch<<" is : "<<numP - numL<<endl;
    cout<<endl;

    //7
    //sorting in decreasing order
    sort(numbers.begin(), numbers.end(), decFun);
    cout<<"After sorting in descending order: "<<endl;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers.at(i)<<"\t";
    }

    cout<<endl;
    cout<<endl;

    //8
    //cheers, bye, 


}