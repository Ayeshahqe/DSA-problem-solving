#include <stdio.h>

int main()
{
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2];

    printf("Enter first elements: ");
    for(i=0; i<n1; i++) scanf("%d", &arr1[i]);
    printf("Enter second elements: ");
    for(j=0; j<n1; j++) scanf("%d", &arr2[j]);

    int merged[n1+n2];
     
    i = j = k = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j])
            merged[k++] = arr1[i++];   //keeping arr1 elements in merged
        else
            merged[k++] = arr2[j++];   //keeping arr2 elements in merged
    }
    
    //To copy remaining elements
    while(i < n1)
        merged[k++] = arr1[i++];
    while(j < n2)
        merged[k++] = arr2[j++];

    printf("Merged array: ");
    for(i=0; i<n1+n2; i++){
        printf("%d ", merged[i]);
    }

    return 0;
}