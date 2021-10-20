#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res;
        int ptrOne = 0;
        int size = s.length();

        while(ptrOne < size){
            while(ptrOne<size && s[ptrOne] == ' '){
                ptrOne++;
            }
            if(ptrOne >= size){
                break;
            }
            int ptrTwo = ptrOne + 1;
            while(ptrTwo<size && s[ptrTwo] != ' '){
                ptrTwo++;
            }
            string word = s.substr(ptrOne, ptrTwo-ptrOne);
            if(res.size() == 0){
                res = word;
            }else{
                res = word + " " + res;
            }
            ptrOne = ptrTwo + 1;
        }

        return res;
    }
};

int main(){
    Solution s;
    string res = s.reverseWords("Sky is blue");
    cout<<res<<endl;

}