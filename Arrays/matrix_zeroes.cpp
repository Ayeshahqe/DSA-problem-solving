#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int m = matrix.size(), n = matrix[0].size();
    vector<int> row(m, 1), col(n, 1);

    for(int i = 0; i < m; i++){                 // This loop is for finding zeroes in matrix
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                row[i] = col[j] = 0;
            }
        }
    }

    for(int i = 0; i < m; i++){                 // This loop is for setting rows and columns to zero
        for(int j = 0; j < n; j++){
            if(row[i] == 0 || col[j] == 0){
                matrix[i][j] = 0;
            }
        }
    }
}

int main(){
    vector<vector<int>> mat = {{1, 1, 1}, {1, 1, 1}, {0, 1, 1}};
    setZeroes(mat);

    cout << "Modified matrix = \n";
    for(auto r : mat){
        for(int c : r){
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}