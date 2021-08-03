#include<iostream>
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

    //adding an edge to the graph
    void addEdge(int vertexOne, int vertexTwo){
        adjacencyList[vertexOne].push_back(vertexTwo);
        adjacencyList[vertexTwo].push_back(vertexOne);
    }

    //displaying the graph
    void printGraph(){
        for(int i=0; i<numOfVertices; i++){
            cout<<i;
            for(auto it= adjacencyList[i].begin(); it!= adjacencyList[i].end(); it++){
                cout<<"->" << *it;
            }
            cout<<endl;
        }
    }

    //actual visiting of nodes take place here
    void keepVisiting(int vertexToVisit, bool visited[]){

        //mark the vertex you are visiting as true 
        visited[vertexToVisit] = true;
        cout<<vertexToVisit<<" ";

        //now iterate through the depth of the node and visit each vertex which is not visited
        for(auto it = adjacencyList[vertexToVisit].begin(); it!= adjacencyList[vertexToVisit].end(); it++){
            if(!visited[*it]){
                keepVisiting(*it, visited);
            }
        }

    }

    //dfs function
    void dfs(){

        //making a bool type visited array to keep track of visited vertices
        bool* visited = new bool[numOfVertices];

        //initialising each vertex with false as it is not visited
        for(int i=0; i<numOfVertices; i++){
            visited[i] = 0;
        }

        //now lets visit every node of the adjacency list
        for(int i=0; i<numOfVertices; i++){
            if(!visited[i]){
                keepVisiting(i, visited);
            }
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

    graphzy.printGraph();

    cout<<"The DFS Traversal is as follows: ";
    graphzy.dfs();


}