#include <stdio.h>

int main(){
    int n, i, j, key, found = 0;

    printf("ENTER SIZE: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter elements to search: ");
    scanf("%d", &key);

    int low = 0, high = n-1, mid;

    // Binary search loop 

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == key){
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key){
            low = mid + 1;              // Search the right half of the array
        }
        else{
            high = mid - 1;             // Search the left half of the array
        }
    }

    if(!found){
        printf("Element not found.\n");
    }

    return 0;
}

// Time Complexity = O(log n)
// Space Complexity = O(1)