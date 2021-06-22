/*
Hey, i'm back, looks like while discussing stl i missed this extremely important member named quque, so like queue is basically
a fifo(first in first out) data structure which is like extremely important in traversals like in level order traversal of binary
tree and many more. So like vectors, pairs, sets, queue is also a important member of stl. It offers functionality mainly:

WHAT YOU'LL FIND HERE, 🤓🧐 ?

1. Declaring a queue syntax
2. Displaying the queue
3. The empty()
4. The front()
5. The pop()
6. The push()
7. Conclusion


*/


#include<iostream>
#include<queue>
using namespace std;

//1
// Syntax of Queue
// std::queue<any datatype you want here> nameOfQueue

//2
//Displaying the queue
void printQueue(std::queue<int> que){
    //3 
    //the empty() checks whether the queue is empty or not
    while(!que.empty()){

        //4
        //the front() as the name suggests is used to move the pointer to the front of queue
        cout<<que.front()<<endl;

        //5
        //the pop() is used to remove an item from front of the queue
        que.pop();
    }
}


int main(){
    std::queue<int> que;

    //6 
    //the push() is used to push an item at the rear(back) end of the queue
    que.push(10);
    que.push(20);
    que.push(30);

    printQueue(que);
}

//7
//cheers, bye, 