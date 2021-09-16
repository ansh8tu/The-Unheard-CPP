/*

WHAT YOU'LL FIND HERE, 🤓🧐 ?

If you want to learn about its internal implementation then refer to this youtube channel named Coding Jesus
Link for the same: https://www.youtube.com/watch?v=6jwj2WIRvTE

Since this particular section created by me is for STL so I would not be performing the internal implementation rather i'll focus more on how to use it!

1. Creating Priority Queue
2. Adding elements to Priority Queue
3. Printing elements of Priority Queue on screen
4. Top fucntion in priority queue
5. Pop fucntion in priority queue
6. Creating Priority Queue in Inc. Order
7. Conclusion

*/

#include<iostream>
#include<vector> 
#include<queue>
using namespace std;

int main(){

    //1
    priority_queue<int> pq;

    //2- elements will be stored in desc. order i.e. 3 2 1 (to avoid confusion) where 3 is the top of the priority queue 
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout<<"Elements of pq: ";
    //3
    while(!pq.empty()){

        // 4 - returns the top of the queue which is sorted in desc. order
        cout<<pq.top()<<" ";

        //5
        pq.pop();
    }

    //6 
    priority_queue<int, vector<int>, greater<int>> pqInc;

    pqInc.push(1);
    pqInc.push(2);
    pqInc.push(3);

    cout<<"\nElements of pqInc: ";
    while(!pqInc.empty()){
        cout<<pqInc.top()<<" ";
        pqInc.pop();
    }

}