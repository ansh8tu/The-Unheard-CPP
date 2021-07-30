#include<iostream>
#include<unordered_map>
using namespace std;

class MapSum {
public:
    /** Initialize your data structure here. */
    unordered_map<string, int> mapzy;
    MapSum() {
    }
    
    void insert(string key, int val) {
        mapzy[key] = val;
    }
    
    int sum(string prefix) {
        int res = 0;
        
        for(auto  a : mapzy){
            if(a.first.substr(0, prefix.size()) == prefix){
                res+=a.second;
            }
        }
        
        return res;
    }
};

int main(){
    MapSum *m1 = new MapSum();
    m1->insert("apple", 3);
    int ans = m1->sum("ap");
    cout<<ans<<endl;
}