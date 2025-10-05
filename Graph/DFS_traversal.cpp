#include <iostream>
#include <vector>
using namespace std;

vector<int> adjList[10];
bool visited[10];

// DFS function

void DFS(int node){
    visited[node] = true;           // Mark as visited
    cout << node << " ";            // Print the visited node

    for(int v : adjList[node]){
        if(!visited[v]){
            DFS(v);                 // Recursive call
        }
    }
}

int main(){
    int nodes = 5;
    int edges = 4;

    int graphEdges[4][2] = {
        {1, 2},
        {1, 3},
        {2, 4},
        {3, 5}
    };

    // Fill the adjacency list

    for(int i = 0; i < edges; i++){
        int u = graphEdges[i][0];
        int v = graphEdges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);        // undirected graph
    }

    cout << "DFS traversal: ";
    DFS(1);

    return 0;
}