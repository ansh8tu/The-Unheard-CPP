#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    list<int> *adjacencyList;
    int numOfVertices;

public:
    Graph(int numOfVertices){
        adjacencyList = new list<int>[numOfVertices];
        this->numOfVertices = numOfVertices;
    }

    void addEdge(int vertexOne, int vertexTwo){
        adjacencyList[vertexOne].push_back(vertexTwo);
        adjacencyList[vertexTwo].push_back(vertexOne);
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

    graphzy.printGraph();


}