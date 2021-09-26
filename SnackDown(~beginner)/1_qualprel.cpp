#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        //for size and index
        int n, k;
        cin>>n>>k;

        //to store
        vector<int> v(n);

        //actually storing
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        //sorting in desc
        sort(v.begin(), v.end(), greater<>());
        int a = 0;
        for(int i=0; i<n; i++){
            if(v[i] >= v[k-1]){
                a++;
            }
            else{
                break;
            }
        }


        cout<<a<<endl;
        
        
    }

}
