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

int getNums(int HCF, int LCM){
    int secNum = HCF*LCM;
    int res = 0;
    unordered_set<int> setz;
    for(int i=1; i<=LCM; i++){
        for(int j=1; j<=LCM; j++){
            if(i*j == secNum && getHCF(i, j) == HCF){
                setz.insert(i);
                setz.insert(j);
            }
        }
    }

    for(auto it : setz){
        res += it;
    }

    return res;
}

int main(){
    int a = 3;
    int b = 9;
    cout << getNums(a, b) << endl;
}