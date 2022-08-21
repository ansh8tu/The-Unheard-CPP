#include<bits/stdc++.h>
using namespace std;

void printOneToN(int i){
    if(i == 0){
        return;
    }

    printOneToN(i-1);
    cout << i << endl;
    
}

int main(){
    int n;
    cout << "Enter the range(N): ";
    cin >> n;

    printOneToN(n);
    return 0;

}