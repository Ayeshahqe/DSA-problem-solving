#include <stdio.h>

int main(){
    int n, i , first, second;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    first = second = -100000;
    for(i=0;i<n;i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } 
        else if(arr[i]>second && arr[i]!=first){
            second = arr[i];
        }
    }
    printf("Second Largest: %d", second);

    return 0;
}