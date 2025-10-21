#include <iostream>
using namespace std;

// Function for matrix rotation by 90 degrees

void rotation(int arr[3][3], int n){
    for(int i = 0; i < n; i++){                 
        for(int j = i; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        int left = 0, right = n-1;

        while(left < right){
            swap(arr[i][left++], arr[i][right--]);
        }
    }

    cout << "Matrix after rotation: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotation(arr, 3);
    return 0;
}