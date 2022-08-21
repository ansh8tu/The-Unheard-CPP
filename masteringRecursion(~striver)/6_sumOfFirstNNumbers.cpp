#include<bits/stdc++.h>
using namespace std;

//remove the & from the sum and see the difference!
void sumUptoN(int n, int &sum){
    if(n == 0){
        return;
    }
    sum += n;
    sumUptoN(n-1, sum);
}

int main(){
    int n;
    cout << "Enter the range(N): ";
    cin >> n;

    int sum = 0;
    sumUptoN(n, sum);

    cout<< "The sum upto " << n << " is: "<< sum << endl;
    return 0;
}