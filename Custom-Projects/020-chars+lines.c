#include <stdio.h>

int main() {
    int nc, linesCount = 0, charCount = 0;

    while((nc = getchar()) != EOF)
        nc == '\n' ? linesCount++ : charCount++; // if...else shorthand
    printf("%d characters in %d lines", charCount, linesCount);
}