/*

WHAT YOU'LL FIND HERE, 🤓🧐 ?

1. Creating maps
2. Adding elements to maps
3. Printing maps on screen 
4. Removing an element from map
5. Iterators in maps
6. Finding a key
7. Conclusion

*/

#include<iostream>
#include<map>
using namespace std;

int main(){

    //1. Creating maps
    //maps are sorted by key value
    map<string, int> mapzy;

    //2. Adding elements to maps
    mapzy.insert({"optimus", 1});
    mapzy.insert({"lucifer", 2});
    mapzy.insert({"optimus", 3});

    //3. Printing maps on screen 
    //even after changing the value of key optimus the value doen't change in map
    //still returns 1
    cout<<mapzy["optimus"]<<endl;

    //4. Removing an element from map
    mapzy.erase("optimus");

    //5. Iterators in maps
    for(auto it= mapzy.begin(); it!= mapzy.end(); it++){
        cout<< it->first << "   " << it->second <<endl;

        //6. Finding a key
        if(mapzy.find("lucifer") != mapzy.end()){
            cout<<"lucifer is found!"<<endl;
        }
    }

    //7
    //cheers, bye, 




}