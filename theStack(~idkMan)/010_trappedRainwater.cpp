#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
    stack<int> stackzy;
    int ans = 0;

    for(int i=0; i<height.size(); i++){
        while(!stackzy.empty() && height[stackzy.top()] < height[i]){
            int curr = stackzy.top();
            stackzy.pop();

            if(stackzy.empty()){
                break;
            }

            else{
                int breadth = i - stackzy.top() - 1;
                ans += ((min(height[stackzy.top()], height[i]) - height[curr]) * breadth);
            }
        }
        stackzy.push(i);
    }   

    return ans;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trap(height);

    cout<<"The trapped rainwater is: "<<ans<<endl;

}

