#include <iostream>
#include <algorithm>
using namespace std;

void triplets(int arr[], int n){
    sort(arr, arr + n);
    bool found = false;

    cout << "Triplets with zero sum are:\n";

    // This loop fix one element and find other two using two pointers

    for(int i = 0; i < n-2; i++){
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0){
                cout << arr[i] << ", " << arr[left] << ", " << arr[right] << "\n";
                found = true;
                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
    }

    if(!found){
        cout << "Not found.\n";
    }
}

int main(){
    int arr[] = {0, -1, 2, -3, 1, 7, 5};
    int n = 7;

    triplets(arr, n);
    return 0;
}
