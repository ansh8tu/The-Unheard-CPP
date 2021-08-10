#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        
        int number1 = num1.length() - 1;
        int number2 = num2.length() - 1;
        int carry = 0;
        
        while(number1>=0 || number2>=0){
            int sum = carry;
            if(number1>=0){
                sum += num1[number1--] - '0';
            }

            if(number2>=0){
                sum += num2[number2--] - '0';
            }

            carry = sum/10;
            result+= to_string(sum%10);
        }
        
        if(carry!=0){
            result+= to_string(carry);
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};

int main(){
    string result;
    Solution s;
    result = s.addStrings("456", "77");
    cout<<result<<endl;
}