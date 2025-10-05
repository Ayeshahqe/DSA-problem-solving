#include <iostream>
#include <vector>
using namespace std;

vector<int> adjList[10];                    // Adjacency List
bool visited[10];                           // Visited array

// DFS function

void DFS(int node){                         // This function recursively visits all the reachable nodes from the given node, marking them as visited and printing them.
    visited[node] = true;
    cout << node << " ";                    

    for(int v : adjList[node]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main(){
    int nodes = 6, edges = 4;

    int graphEdges[4][2] = {
        {1, 2},
        {2, 3},
        {3, 6},
        {4, 5}
    };

    // Adjacency list

    for(int  i = 0; i < edges; i++){
        int u = graphEdges[i][0];
        int v = graphEdges[i][1];

        adjList[u].push_back(v);             // Get the first node of the current edge
        adjList[v].push_back(u);
    }

    int components = 0;

    cout << "Connected components:\n";
    for(int i = 1; i <= nodes; i++){         // This loop is for exploring each unvisited connected component in the graph.
        if(!visited[i]){
            components++;
            cout << "Component " << components << ": ";
            DFS(i);                          
            cout << endl;
        }
    }

    cout << "Total connected components = " << components << endl;

    return 0;
}
