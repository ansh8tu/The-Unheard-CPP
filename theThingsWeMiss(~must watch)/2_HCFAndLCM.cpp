#include<iostream>
#include<unordered_set>
using namespace std;

int getHCF(int a, int b){
    int minNum = min(a, b);
    int hcf = 1;
    for(int i=1; i<=minNum; i++){
        if(a%i == 0 && b%i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int getLCM(int a, int b){
    int hcfVal = getHCF(a, b);
    int lcmVal = (a*b)/hcfVal;
    return lcmVal;
}


int main(){
    int a = 3;
    int b = 10;
    cout << getHCF(a, b) << endl;
    cout << getLCM(a, b) << endl;
}