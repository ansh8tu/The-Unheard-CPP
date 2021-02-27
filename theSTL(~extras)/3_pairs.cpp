/*

WHAT YOU'LL FIND HERE, 🤓🧐 ?

1. Declaring a pair syntax
2. Making a pair and displaying it
3. Creating a set of pairs 
4. Adding pairs to the set
5. Displaying the set of pairs 
6. Finding upper bound of a number
7. Conclusion

*/

#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    //1
    //declaring a pair syntax
    pair<int, int> integerPair;

    //2
    //making a pair and displaying it
    integerPair = make_pair(10,20);
    cout<<"The pair made is : "<<"("<<integerPair.first<<","<<integerPair.second<<")"<<endl;

    //3
    //creating a set of pairs 
    set<pair<int, int>> pairIntegers;

    //4
    //adding pairs to the set
    pairIntegers.insert({1,10});
    pairIntegers.insert({20,50});
    pairIntegers.insert({100,300});
    pairIntegers.insert({350,400});

    //5
    //displaying the set of pairs 
    cout<<"The set of pairs are : ";
    for(auto x : pairIntegers){
        cout<< "(" <<x.first<<", "<<x.second<<")"<<" ";
    }
    cout<<endl;

    //6
    //finding upper bound of a number
    int num = 50;
    auto it = pairIntegers.upper_bound({num, INT_MAX});
    
    pair<int,int> current = *it;
    cout<<"The upper bound for "<<num<<" is : ";
    cout<< "(" <<current.first<<", "<<current.second<<")"<<endl;

    //7
    //cheers, bye, 
    
}