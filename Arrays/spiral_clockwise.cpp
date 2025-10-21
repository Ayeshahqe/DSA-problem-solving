#include <iostream>
using namespace std;

void spiralTraversal(int arr[3][3], int n){
    int left = 0, right = n-1;
    int top = 0, bottom = n-1;

    cout << "Spiral matrix: ";

    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){         // This loop is for printing top row
            cout << arr[top][i] << " ";
        }
        top++;

        for(int i = top; i <= bottom; i++){         // This loop is for printing right column
            cout << arr[i][right] << " ";
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){     // This loop is for printing bottom row
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--){     // This loop is for printing left column
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralTraversal(arr, 3);
    return 0;
}