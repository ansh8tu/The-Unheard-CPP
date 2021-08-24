#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    void dfs(vector<bool> &visited, int current, vector<vector<int>> &adjacencyList){
        visited[current] = true;
        
        for(auto it = adjacencyList[current].begin(); it!= adjacencyList[current].end(); it++){
            if(!visited[*it]){
                dfs(visited, *it, adjacencyList);
            }
        }
    }
    
    bool validPath(int n, vector<vector<int>> edges, int start, int end) {
        
        vector<vector<int>> adjacencyList(n);
        
        //making a graph
        for(int i=0; i< edges.size(); i++){
            adjacencyList[edges[i][0]].push_back(edges[i][1]);
            adjacencyList[edges[i][1]].push_back(edges[i][0]);     
        }
        
        //making an array to check whether a vertex is visited or not
        vector<bool> visited(n, false);
        
        //actually using dfs to traverse the graph
        dfs(visited, start, adjacencyList);
        
        return visited[end] == true? true: false;
        

    }
    
};

int main(){
    int numOfVertices = 3;
    vector<vector<int>> edges = {{0,1}, {1,2}, {2,3}};
    int start = 0;
    int end = 3;

    Solution s;
    bool ans = s.validPath(numOfVertices, edges, start, end);
    cout<< ans;
}