#include<iostream>
#include<map>
#include<list>
using namespace std;

int main(){
    map<string, list<string>> mapzy;

    mapzy.insert({"a", {"b", "c"}});
    mapzy.insert({"b", {"d"}});
    mapzy.insert({"c", {"e"}});
    mapzy.insert({"d", {"f"}});
    mapzy.insert({"e", {}});
    mapzy.insert({"f", {}});

    for(auto it= mapzy.begin(); it!= mapzy.end(); it++){
        cout<< it->first << ":  ";
        list<string> l = it->second;

        for(auto it2 = l.begin(); it2!= l.end(); it2++){
            cout<<*it2<<" ";
        }
        cout<<endl;
    }
}