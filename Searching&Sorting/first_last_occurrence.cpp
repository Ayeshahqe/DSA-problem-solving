#include <iostream>
using namespace std;

// Binary search for first occurrence

int firstPos(int arr[], int n, int x){
    int low = 0, high = n - 1, mid, result = -1;

    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == x){
            result = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

// Binary search for last occurrence

int lastPos(int arr[], int n, int x){
    int low = 0, high = n - 1, result = -1, mid;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == x){
            result = mid;
            low = mid + 1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return result;
}

int main(){
    int arr[] = {1, 2, 4, 4, 4, 5, 6, 7};
    int n = 8, x = 4;

    cout << "First position = " << firstPos(arr, n , x) << endl;
    cout << "Last position = " << lastPos(arr, n, x) << endl;

    return 0;
}