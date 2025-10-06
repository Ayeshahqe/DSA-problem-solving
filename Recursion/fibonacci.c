#include <stdio.h>

int fibo(int n){
    if(n <= 1){
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n = 7, i;
    printf("Fibonacci sequence: ");
    for(i = 0; i < n; i++){
        printf("%d ", fibo(i));
    }
    return 0;
}

// Time Complexity: O(2^n)
// Space Complexity: O(n)