#include <iostream>
#include <vector>
using namespace std;

vector<int> adjList[10];                    // Adjacency list
bool visited[10];                           // Visited array
bool recStack[10];                          // Recursion stack

// DFS to dectect cycle in a directed graph

bool DFS_cycle_directed(int node){
    visited[node] = true;
    recStack[node] = true;

    for(int v : adjList[node]){
        if(!visited[v]){
            if(DFS_cycle_directed(v)){
                return true;                // Recursive call
            }
        }
        else if(recStack[v]){
            return true;                    // This is for checking if the neighbour node already exist in recursion stack. If exists that means there's a cycle.
        }
    }

    recStack[node] = false;                 // For removing nodes from recursion stack when backtracking.
    return false;
}

int main(){
    int nodes = 4, edges = 5;

    int graphEdges[5][2] = {
        {1, 2},
        {1, 5},
        {2, 3},
        {3, 4},
        {4, 2}
    };

    for(int i = 0; i < edges; i++){
        int u = graphEdges[i][0];
        int v = graphEdges[i][1];

        adjList[u].push_back(v);
    }

    bool cycle = false;
    for(int i = 1; i <= nodes; i++){         // This loop ensures that no part of the graph is left unchecked.
        if(!visited[i]){
            if(DFS_cycle_directed(i)){
                cycle = true;
                break;
            }
        }
    }

    if(cycle){
        cout << "\nThis graph contains a cycle.\n";
    }
    else{
        cout << "\nThis graph doesn't contain a cycle.\n";
    }

    return 0;
}