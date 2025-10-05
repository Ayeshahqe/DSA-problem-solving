#include <stdio.h>

int main()
{
    int n, i, max, min;
    printf("ENTER SIZE: ");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("MAX: %d\nMIN: %d", max, min);

    return 0;
}