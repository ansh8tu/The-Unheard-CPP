#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<string> myVector;
    myVector.push_back("PeterPan");
    myVector.push_back("BakaNeko");

    cout<<"The size of my Vector is : "<< myVector.size()<<endl;

    for(int i=0; i< myVector.size(); i++){
        cout<<myVector.at(i)<<endl;
    }

}