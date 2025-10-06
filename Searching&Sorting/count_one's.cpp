#include <iostream>
using namespace std;

int countOne(int arr[], int n) {
    int low = 0, high = n - 1, mid;

    while(low < high){
        mid = (low + high) / 2;

        if(arr[mid] == 0){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
    return n - low;
}

int main(){
    int arr[] = {0, 0, 0, 0, 1, 1, 1};
    int n = 7;

    cout << "Number of 1's: " << countOne(arr, n) << endl;
    return 0;
}

// Time complexity = O(logn)