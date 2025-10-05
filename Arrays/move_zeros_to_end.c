#include <stdio.h>

int main()
{
    int n = 7, i, j=0;
    int arr[] = {2, 0, 50, 0, 0, 80, 7};
    int result[n];

    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            result[j++] = arr[i];
        }
    }

    // Filling the remaining array with zeros

    while(j < n){
        result[j++] = 0;
    }

    printf("Array after moving all zeros to the end: ");
    for(i = 0; i < n; i++){
        printf("%d ", result[i]);
    }
    return 0;
}