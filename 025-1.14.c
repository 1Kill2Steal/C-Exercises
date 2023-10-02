#include <stdio.h>

int main() {
    int c = 0, count[74] = {0}, x; // ascii for '0' to 'z'

    printf("Enter a string:\n");

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= 'z') {
            x = c - '0';
            count[x]++;
        }

        c++;
    }
    
    for(c = 0; c < 74; c++)
        printf("%c' occurs %d times in the string.\n", c + '0', count[c]);

    return 0;
}