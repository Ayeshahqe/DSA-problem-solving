#include <iostream>
#include <vector>
using namespace std;

vector<int> adjList[10];           
bool visited[10];

// DFS to detect cycle

bool DFS_cycle(int node, int parent) {
    visited[node] = true;

    for(int v : adjList[node]){
        if(!visited[v]){
            if(DFS_cycle(v, node)){         // This is recursive call.
                return true;
            }
        }
        else if( v != parent){              
            return true;
        }
    }
    return false;
}

int main(){
    int nodes = 5, edges = 5;
    int graphEdges[5][2] = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 2},                             // cycle
        {4, 5}
    };

    // Adjacency list

    for(int i = 0; i < edges; i++){
        int u = graphEdges[i][0];
        int v = graphEdges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool cycle = true;
    for(int i = 1; i <= nodes; i++){
        if(!visited[i]){
            if(DFS_cycle(i, -1)){
                cycle = true;
                break;
            }
        }
    }
    
    if(cycle){
        cout << "\nGraph contains a cycle.\n";
    }
    else{
        cout << "\nGraph does not contain a cycle.\n";
    }
    return 0;
}

