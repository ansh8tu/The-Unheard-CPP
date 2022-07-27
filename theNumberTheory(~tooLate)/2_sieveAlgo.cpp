#include<bits/stdc++.h>
using namespace std;

void seivePrime(int num, vector<int> &isPrime){
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i<isPrime.size(); i++){
        if(isPrime[i] == 1){
            for(int j = 2*i; j<isPrime.size(); j+=i){
                isPrime[j] = 0;
            }
        }
    }
}

int main(){
    int calcPrimNUmUpto = 101;
    vector<int> isPrime(calcPrimNUmUpto+1, 1);

    seivePrime(calcPrimNUmUpto, isPrime);

    for(int i=0; i<isPrime.size(); i++){
        if(isPrime[i] == 1){
            cout << i << " ";
        }
    }
}