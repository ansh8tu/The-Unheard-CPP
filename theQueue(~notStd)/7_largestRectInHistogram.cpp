#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestRectangleArea(vector<int>& heights) {

    stack<int> stackzy;
    int i=0;
    int s = heights.size();//2
    int ans = 0;
    heights.push_back(0); //{2,4,0}

    while(i<=s){

        while(!stackzy.empty() && heights[stackzy.top()] >= heights[i]){
            int top = stackzy.top();
            int h =  heights[stackzy.top()];
            stackzy.pop();

            if(stackzy.empty()){
                ans = max(ans, h*i);
            }

            else{
                int len = i - stackzy.top() -1;
                ans = max(ans, h*len);
            }
        }

        stackzy.push(i);
        i++;    
    }
    return ans;

}

int main(){

    vector<int> heights = {2,4};
    int ans = largestRectangleArea(heights);
    cout<<"The area of largest rectangle is: "<<ans<<endl;

}
