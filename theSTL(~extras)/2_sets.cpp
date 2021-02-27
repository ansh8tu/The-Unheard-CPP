/*

WHAT YOU'LL FIND HERE, 🤓🧐 ?

1. Creating Sets
2. Adding elements to Sets
3. Printing Sets on screen
4. Performing binary search and simple search using find()
5. Removing an element from set
6. Iterators in sets
6. Upper bound
7. Sorting elements in descending order
8. Conclusion

*/

#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){

    //1
    // by default its less only but you can do descending order by doing greater<int>
    set<int, less<int>> numbers;

    //2
    //so unlike a vector what a set does is that it automataically starts to arrange elements in ascending order
    //as soon as they are inserted 
    numbers.insert(3);
    numbers.insert(1);
    numbers.insert(10);
    numbers.insert(2);
    //only a single 2 will be present 
    numbers.insert(2);

    //3
    cout<<"Printing the Set: "<<endl;
    for(auto it =numbers.begin(); it != numbers.end(); it++){
        cout<<*it <<"\t";
    }

    cout<<endl;

    //4.a
    bool numPresent = binary_search(numbers.begin(), numbers.end(), 3);
    if(numPresent ==1){
        cout<<"Number is Present"<<endl;
    }
    else{
        cout<<"Number not present!"<<endl;
    }

    //4.b
    auto it = numbers.find(2);
    if(it == numbers.end()){
        cout<<"Number not present!"<<endl;
    }
    else{
        cout<<"Number " << *it <<" is present!"<<endl;
    }

    //5
    numbers.erase(2);
    for(auto it =numbers.begin(); it != numbers.end(); it++){
        cout<<*it <<"\t";
    }
    cout<<endl;

    //6
    auto it2 = numbers.upper_bound(1);
    cout<<*it2<<endl;

    //7
    set<int, greater<int>> descOrder;
    descOrder.insert(20);
    descOrder.insert(2);
    descOrder.insert(7);
    descOrder.insert(40);

    cout<<"Descending order : "<<endl;
    for(auto it = descOrder.begin(); it != descOrder.end(); it++){
            cout<<*it<<"\t";
    }

    //8 
    //cheers, bye, 


}

