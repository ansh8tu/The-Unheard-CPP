#include<bits/stdc++.h>
using namespace std;

//try doing long division that you used to do back in  8th class
//follow up: try asking yourself what if we swap a and b, will the gcd change (HINT: go one stap back from the starting point)
int euclidGCD(int a, int b){
    if(b == 0 ){
        return a;
    }
    return euclidGCD(b, a % b);
}

int main(){
    int a = 18;
    int b = 12;

    int gcd = euclidGCD(a, b);
    int lcm = (a * b)/(gcd);

    cout << "GCD: "<< gcd <<endl;
    cout << "LCM: "<< lcm <<endl;

    return 0;
}