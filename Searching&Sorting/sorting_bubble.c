#include <stdio.h>

int main(){
    int n, i, j, temp, count=0;

    printf("ENTER SIZE: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        count++;
        for(j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nSwap count: %d", count);


    return 0;
}