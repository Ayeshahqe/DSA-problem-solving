#include <stdio.h>

int main()
{
    int n = 7, i;
    int arr[n];

    printf("Enter 7 array elelments: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);   
    }

    printf("Original array: ");       
    for(i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }

    printf("Reversed array: ");
    for(i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}