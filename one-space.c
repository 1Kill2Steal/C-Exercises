#include <stdio.h>

int main() {
    int c;
    int spaceCount = 0;

    while ((c = getchar()) != EOF) {

        if(c == ' ' && spaceCount == 0) {
            ++spaceCount;
            putchar(c);
        }

        if(c != ' ') {
            spaceCount = 0;
            putchar(c);
        }
        
    }
}