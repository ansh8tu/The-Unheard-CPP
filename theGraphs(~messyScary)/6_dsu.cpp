#include<iostream>
using namespace std;

class DSU{

    //array to store the parent of each vertex
    int* parent;

    //array which detemines the parent while we perform the union operation
    int* rank;

    //std::swap
    void swap(int& a, int& b){
        int c = a;
        a = b;
        b = c;
    }

public:

    //constructor that initializes the parent and the rank array
    DSU(int numOfVertices){
        parent = new int[numOfVertices];
        rank = new int[numOfVertices];

        for(int i=0; i<numOfVertices; i++){
            parent[i] = i;
            rank[i] = 1;
        }
    }

    //destructor 
    ~DSU(){
        delete[] parent;
    }

    //method to find the parent of any vertex
    int findParent(int vertex){

        //so like if the parent of the vertex is the vertex itself then we simply return the same
        if(parent[vertex] == vertex){
            return vertex;
        }

        //else what we do is that we call the findParent method by passing the parent[vertex] so that we get the ultimate parent
        //of the vertex and by following path compression we store the value of ultimate parent in parent array index of that vertex
        //ps: 5->6->7->8 findParent(8) ...... 5, then now update the value of the parent of 8 from 7 or say 6 to 5 as 5 is the 
        //ultimate parent 
        return parent[vertex] = findParent(parent[vertex]);

    }


    //method to perform union operation
    void unionOpereation(int vertexOne, int vertexTwo){
        vertexOne = findParent(vertexOne);
        vertexTwo = findParent(vertexTwo);

        if(rank[vertexOne] > rank[vertexTwo]){
            parent[vertexTwo] = vertexOne;
        }

        else if(rank[vertexOne] < rank[vertexTwo]){
            parent[vertexOne] = vertexTwo;
        }

        else{
            parent[vertexTwo] = vertexOne;
            rank[vertexOne]++;
        }
    }

    bool sameSet(int vertexOne, int vertexTwo){
        return findParent(vertexOne) == findParent(vertexTwo);
    }

    
};

int main(){
    DSU dis(5);
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    dis.unionOpereation(a, b);
    dis.unionOpereation(c, d);
    dis.unionOpereation(d, e);

    int num = dis.findParent(e);
    cout<< num <<endl;

    bool sol = dis.sameSet(c, e);
    cout<<sol<<endl;


}