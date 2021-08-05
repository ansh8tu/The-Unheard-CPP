#include<iostream>
#include<vector>
#include<stack>
#include<list>
using namespace std;

class Graph{

    int numOfVertices;
    list<int> *adjacencyList;

public:
    Graph(int numOfVertices){
        this->numOfVertices = numOfVertices;
        adjacencyList = new list<int>[numOfVertices];
    }

    void addEdge(int vertexOne, int vertexTwo){
        adjacencyList[vertexOne].push_back(vertexTwo);
    }

    void topologicalSortHelper(int currVertice, bool visited[], stack<int>& stackzy){
        visited[currVertice] = true;

        for(auto it = adjacencyList[currVertice].begin(); it!= adjacencyList[currVertice].end(); it++){
            if(!visited[*it]){
                topologicalSortHelper(*it, visited, stackzy);
            }
        }
        stackzy.push(currVertice);
    }

    void topologicalSort(){
        stack<int> stackzy;
        bool* visited = new bool[numOfVertices];

        for(int i=0; i<numOfVertices; i++){
            visited[i] = false;
        }
        
        for(int i=0; i<numOfVertices; i++){
            if((!visited[i])){
                topologicalSortHelper(i, visited, stackzy);
            }
        }

        while(!stackzy.empty()){
            cout<<stackzy.top()<< " ";
            stackzy.pop();
        }

    }

    void printGraph(){
        for(int i=0; i<numOfVertices; i++){
            cout<<i;
            for(auto it= adjacencyList[i].begin(); it!= adjacencyList[i].end(); it++){
                cout<<"->" << *it;
            }
            cout<<endl;
        }
    }

};

int main(){

    int numOfVertices, numOfEdges;
    cin>>numOfVertices;
    cin>>numOfEdges;

    Graph graphzy(numOfVertices);

    for(int i=0; i<numOfEdges; i++){
        int vertexOne, vertexTwo;
        cin>>vertexOne>>vertexTwo;
        graphzy.addEdge(vertexOne, vertexTwo);
    }

    graphzy.topologicalSort();


}