#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    list<pair<int, int>> *adjacencyList;
    int numOfVertices;
    priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > pq;
    int source;

public:
    Graph(int numOfVertices, int source){
        adjacencyList = new list<pair<int, int>>[numOfVertices];
        this->numOfVertices = numOfVertices;
        this->source = source;
    }

    void addEdge(int vertexOne, int vertexTwo, int weight){
        adjacencyList[vertexOne].push_back({vertexTwo, weight});
        adjacencyList[vertexTwo].push_back({vertexOne, weight});
    }

    void printGraph(){
        for(int i=0; i<numOfVertices; i++){
            cout<<i;
            list<pair<int, int>> l = adjacencyList[i];
            
            for(auto it= l.begin(); it!= l.end(); it++){
                cout<<" (" << it->first<< ", "<< it->second<<") ";
            }

            cout<<endl;
        }
    }

    void dijkstraAlgorithm(){
        int* distances = new int[numOfVertices];

        for(int i=0; i<numOfVertices; i++){
            distances[i] = 99999;
        }

        distances[source] = 0;
        pq.push({0, source});

        while(!pq.empty()){
            int currDist = pq.top().first;
            int prevNode = pq.top().second;
            pq.pop();

            for(auto it = adjacencyList[prevNode].begin(); it!= adjacencyList[prevNode].end(); it++){
                int nextNode = it->first;
                int nextDist = it->second;

                if(distances[nextNode] > distances[prevNode] + nextDist){
                    distances[nextNode] = distances[prevNode] + nextDist;
                    pq.push({distances[nextNode], nextNode});
                }
            }
        }

        cout<<"Distance from Source "<<source<<": ";
        for(int i=0; i<numOfVertices; i++){
            cout<<distances[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    int numOfVertices, numOfEdges;
    cin>>numOfVertices;
    cin>>numOfEdges;

    Graph graphzy(numOfVertices, 2);

    for(int i=0; i<numOfEdges; i++){
        int vertexOne, vertexTwo, weight;
        cin>>vertexOne>>vertexTwo>>weight;
        graphzy.addEdge(vertexOne, vertexTwo, weight);
    }

    //graphzy.printGraph();
    graphzy.dijkstraAlgorithm();
}
