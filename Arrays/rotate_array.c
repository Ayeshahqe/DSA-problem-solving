#include <stdio.h>

int main(){
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int first_index = arr[0];
    for(i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first_index;

    printf("Rotated: ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}