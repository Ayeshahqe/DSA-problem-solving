#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nodes = 4;
    int edges = 5;

    vector<int> adjList[5];
    adjList[1] = {2, 3};
    adjList[2] = {1, 3, 4};
    adjList[3] = {1, 2, 4};
    adjList[4] = {2, 3};

    int adjMatrix[5][5] = {0};

    // Convert list to matrix

    for(int i = 0; i <= nodes; i++){
        for(int v : adjList[i]){
            adjMatrix[i][v] = 1;        // i -> v
        }
    }

    // Print adjacency matrix

    for(int i = 0; i <= nodes; i++){
        for(int j = 0; j <= nodes; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}