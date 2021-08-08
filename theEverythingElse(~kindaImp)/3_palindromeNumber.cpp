#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = false;
        long reverseNum = 0;
        int num = x;
        long moduloDigit;

        while(num > 0){
            moduloDigit = num % 10;
            reverseNum = (reverseNum*10) + moduloDigit;
            num = num/10;
        }

        if(reverseNum == x){
            return true;
        }

        else{
            return false;
        }
    }
};

int main(){
    int num = 10;
    Solution s;
    cout<< s.isPalindrome(num);
}