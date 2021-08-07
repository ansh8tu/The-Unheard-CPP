#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {

public:
    vector<vector<bool>> isPalindrome(string s){
        int n = s.size();
        vector<vector<bool>> boolArray(n, vector<bool>(n, false));

        for(int gap=0; gap<n; gap++){
            for(int i=0, j=gap; j<n; i++, j++){

                if(gap == 0){
                    boolArray[i][j] = true;
                }

                else if(gap == 1){
                    if(s[i] == s[j]){
                        boolArray[i][j] = true;
                    } 
                    else{
                        boolArray[i][j] = false;
                    }
                }

                else{
                    if(s[i] == s[j] && boolArray[i+1][j-1] == true){
                        boolArray[i][j] = true;
                     }
                     else{
                        boolArray[i][j] = false;
                     }
                }
            }
        }
        return boolArray;
    } 

    int minCut(string s) {
        int n = s.size();
        if(n==0){
            return 0;
        }

        vector<vector<bool>> boolArray = isPalindrome(s);
        vector<int> solArray(n);
        solArray[0] = 0;

        for(int j=1; j<solArray.size(); j++){
            if(boolArray[0][j]){
                solArray[j] = 0;
            }

            else{
                int minVal = INT_MAX;
                for(int i=j; i>=1; i--){
                    if(boolArray[i][j]){
                        if(solArray[i-1]< minVal){
                            minVal = solArray[i-1];
                        }
                    }
                }

                solArray[j] = minVal + 1;
            }
        }

        return solArray[solArray.size() -1];
    }

};

int main(){
    string s = "abccbc";
    Solution solzy;
    int sol = solzy.minCut(s);
    cout<<sol<<endl;
    
}

