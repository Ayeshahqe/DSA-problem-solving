#include <stdio.h>

int main()
{
    int n, i, j, temp, minIndex;

    printf("ENTER SIZE: ");
    scanf("%d", &n);

    int arr[n];

    printf("ENTER ELEMENTS: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        minIndex = i;
        for(j=i+1; j < n; j++){
            if(arr[j] < arr[minIndex]) 
            minIndex = j;               //If arr[j] is smaller, update min to j → now min points to the new smallest element.
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)