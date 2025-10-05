#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int freq[256] = {0};                        // Initializes all elements of the array to zero.
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i]; i++){
        freq[(unsigned char)str[i]]++;          // Converts the character to its integer ASCII value and & count the frequency.
    }

    printf("Character frequencies:\n");
    for(i = 0; i < 256; i++){
        if(freq[i] != 0){
            printf("%c : %d\n", i, freq[i]);
        }
    }
    return 0;
}