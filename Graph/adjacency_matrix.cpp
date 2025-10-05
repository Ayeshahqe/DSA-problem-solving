#include <iostream>
using namespace std;

int main() {
    int nodes = 4;                      // Total number of nodes in graph
    int edges = 5;                      // Total number of edges in graph

    int adjMatrix[10][10] = {0};        // A 2D array (Adjacency Matrix) initialized with 0.

    int graphEdges[5][2] = {            
        {1, 2},
        {1, 3},
        {2, 3},
        {2, 4},
        {3, 4}
    };

    // Adjacency matrix.

    for(int i = 0; i < edges; i++){     
        int u = graphEdges[i][0];       
        int v = graphEdges[i][1];       

        adjMatrix[u][v] = 1;            // For connection u -> v in undirected graph
        adjMatrix[v][u] = 1;            // For connection v -> u in undirected graph
    }

    // Print adjacency matrix

    cout << "Adjacency Matrix:\n";
    for(int i = 1; i <= nodes; i++){
        for(int j = 1; j <= nodes; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;                   
    }
    return 0;
}