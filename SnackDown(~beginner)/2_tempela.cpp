#include<iostream>
#include<vector>
using namespace std;

int main() {

    //number of strips/testcases
    int t; 
    cin>>t;

    while(t--){

        //size of vector containing hieghts
        int n;
        cin>>n;
        vector<int> v(n);
        bool res = true;

        //taking input of hieghts
        for(int i=0; i<v.size(); i++){
            cin>>v[i];
        }

        //if size is even return aftee printing no
        if(v.size() % 2 == 0){
            res = false;
        }

        else{
            int start = 0; 
            int end = v.size()-1;
            int ele = 1;

            while(start<=end){
                if(v[start] != ele || v[end] != ele){
                    res = false;
                    break;
                }

                start++;
                end--;
                ele++;
            }
        }

        if(res == true){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

}