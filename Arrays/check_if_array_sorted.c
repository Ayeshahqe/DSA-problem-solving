#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sorted = 1;

    printf("ENTER SIZE: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed.");
        return 1;                                 //exit with error
    }

    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            sorted = 0;
            break;
        }
    }

    if(sorted){
        printf("Sorted");
    }else{
        printf("Not sorted.");
    }

    free(arr);

    return 0;
}