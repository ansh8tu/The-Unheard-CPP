#include<iostream>
using namespace std;

int gcd(int num1, int num2){

    if(num1 == 0){
        return num2;
    }

    return gcd(num2%num1, num1);
}

int gcdBruteForce(int num1, int num2){
    int finalAns = 1;

    for(int i=1; i<=min(num1, num2); i++){
        int modOne = num1%i;
        int modTwo = num2%i;

        if(modOne == 0 && modTwo == 0 && i>finalAns){
            finalAns = i;
        }
    }

    return finalAns;
}

int main(){
    int res = gcd(1400, 1500);
    int mod = gcdBruteForce(1400, 1500);
    cout<<res<<endl;
    cout<<mod<<endl;
}