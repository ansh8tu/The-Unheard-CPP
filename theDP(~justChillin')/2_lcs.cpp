#include<iostream>
#include<string>
using namespace std;

int longestSubsequence(string s1, string s2){
    int table[20][20];

    for(int i=0; i<=s2.length(); i++){
        for(int j=0; j<=s1.length(); j++){
            if(i == 0 || j == 0){
                table[i][j] = 0;
            }

            else if(s2[i-1] == s1[j-1]){
                table[i][j] = table[i-1][j-1] + 1;
            }

            else{
                table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
        }
    }

    return table[s2.length()][s1.length()];

}

int main(){

    string s1, s2;

    cout<<"Enter string 1: ";
    cin>>s1;

    cout<<"Enter string 2: ";
    cin>>s2;

    int res = longestSubsequence(s1, s2);
    cout<<"The length of the largest common subsequence is: "<<res<<endl;
    
}