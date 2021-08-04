#include<iostream>
#include<list>
#include<queue>
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

    vector<int> bfs(){
        queue<int> quizzy;
        vector<int> solutionSet;

        //initially we'll push 0 to the queue
        quizzy.push(0);

        //array that keeps track of which vertex is visited
        bool* visited = new bool[numOfVertices];

        //initialsing all the elements of the visited array to 0
        for(int i=0; i<numOfVertices; i++){
            visited[i] = 0;
        }

        //making 1 at 0 as it is visited
        visited[0] = 1;

        while(!quizzy.empty()){
            int element = quizzy.front();
            quizzy.pop();
            solutionSet.push_back(element);

            for(auto it = adjacencyList[element].begin(); it!=adjacencyList[element].end(); it++){
                if(visited[*it]!=1){
                    visited[*it] =1;
                    quizzy.push(*it);
                }
            }
        }

        return solutionSet;
    }
};

int main(){

    int numOfVertices, numOfEdges;
    vector<int> result;

    cin>>numOfVertices;
    cin>>numOfEdges;

    Graph graphzy(numOfVertices);

    for(int i=0; i<numOfEdges; i++){
        int vertexOne, vertexTwo;
        cin>>vertexOne>>vertexTwo;
        graphzy.addEdge(vertexOne, vertexTwo);
    }

    result = graphzy.bfs();

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

}