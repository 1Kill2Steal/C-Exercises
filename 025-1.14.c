#include <stdio.h>

// 122 (position of 'z' on the ascii table) - 48 (position of '0' on the ascii table) = 74
#define ARRAY_SIZE 'z' - '0'

int main() {
    int c = 0, count[ARRAY_SIZE] = {0}, x;

    printf("Enter a string:\n");

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= 'z') {
            x = c - '0';
            count[x]++;
        }

        c++;
    }
    
    for(c = 0; c < ARRAY_SIZE; c++)
        printf("%c' occurs %d times in the string.\n", c + '0', count[c]);

    return 0;
}
