#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nodes = 4;
    int edges = 5;

    // Adjacency matrix of an undirected graph

    int adjMatrix[5][5] = {
        {0, 0, 0, 0, 0},                    // sinces nodes start at 1, row 0 is unused.
        {0, 0, 1, 1, 0},                    // node 1 connected to 2 and 3
        {0, 1, 0, 1, 1},                    // node 2 connected to 1, 3 and 4
        {0, 1, 1, 0, 1},                    // node 3 connected to 1, 2 and 4
        {0, 1, 1, 0, 0}                     // node 4 connected to 2 and 3
    };

    // Create adjacency list

    vector<int> adjList[10];

    // Convert matrix to list

    for(int i = 1; i <= nodes; i++){
        for(int j = 1; j <= nodes; j++){
            if(adjMatrix[i][j] == 1){
                adjList[i].push_back(j);    // add j in i's list
            }
        }
    }

    // Print adjacency list

    cout << "Converted adjacency list:\n";
    for(int i = 1; i <= nodes; i++){
        cout << i << " -> ";
        for(int v: adjList[i]){
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}