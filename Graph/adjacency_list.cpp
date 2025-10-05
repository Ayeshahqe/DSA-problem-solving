#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nodes = 4;                      // Total number of nodes in graph
    int edges = 5;                      // Total number of edges in graph

    // Create adjacency list (array of vectors)

    vector<int> adjlist[10];

    int graphEdges[5][2] = {
        {1, 2},
        {1, 3},
        {2, 3},
        {2, 4},
        {3, 4}
    };

    // Adjacency list

    for(int i = 0; i < edges; i++){
        int u = graphEdges[i][0];
        int v = graphEdges[i][1];

        adjlist[u].push_back(v);        // u -> v
        adjlist[v].push_back(u);        // v -> u
    }

    // Print adjacency list

    cout << "Adjacency list:\n";
    for(int i = 1; i <= nodes; i++){
        cout << i << " -> ";
        for(int v : adjlist[i]) {       // This loop is for printing all the neighbors of the current node i.
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}