#include <iostream>
#include <vector>                           
#include <queue>
using namespace std;

vector<int> adjList[10];
bool visited[10];

// BFS function

void BFS(int start){
    queue<int> q;                           // Creating an empty queue of integers.
    visited[start] = true;
    q.push(start);

    while(!q.empty()){                      // This loop continues as long as there are nodes left in the queue.
        int node = q.front();
        q.pop();
        cout << node << " ";                

        for(int v : adjList[node]){         // Iterates through all neighbours (v) of the current node.
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    int nodes = 5;
    int edges = 4;

    int graphEdges[4][2] = {                 
        {1, 2},                             
        {2, 3},
        {3, 4},
        {4, 5}
    };

    // Build adjacency list

    for(int i = 0; i <= edges; i++){
        int u = graphEdges[i][0];           
        int v = graphEdges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);            
    }

    cout << "BFS traversal: ";
    BFS(1);

    return 0;                                
} 