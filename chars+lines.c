#include <stdio.h>

int main() {
    int nc, linesCount, charCount;
    linesCount = 0, charCount = 0;

    while((nc = getchar()) != EOF)
        nc == '\n' ? linesCount++ : charCount++;
    printf("%d characters in %d lines", charCount, linesCount);
}