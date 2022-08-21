#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i > n){
        return;
    }
    cout<<"Sinatraa!"<<endl;
    printName(i+1, n);
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print your name: ";
    cin>>n;

    printName(1, n);
    return 0;
}