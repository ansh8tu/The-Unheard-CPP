#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

vector<string> split(string s){
    vector<string> v;
    s.push_back(',');
    string temp = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ','){
            v.push_back(temp);
            temp.clear();
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return v;
}

bool isValidSerialization(string preorder) {
    vector<string> v = split(preorder);
    int count = 1;

    for(int i=0; i<v.size(); i++){
        count--;
        if(count<0){
            return false;
        }
        if(v[i] != "#"){
            count+=2;
        }
    }
    return count == 0;
}

int main(){
    bool ans = isValidSerialization("9,3,4,#,#,1,#,#,2,#,6,#,#");
    cout<<ans;
}