#include <stdio.h>

int main()
{
    int arr[5] = {4, 30, 20, 6, 70};
    int found = 0, n = 5, key;
    printf("Enter key: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Key found at index %d", i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Not Found.\n");
    }

    return 0;
}