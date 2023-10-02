#include <stdio.h>

int main() {
    int nc, linesCount, tabCount, spaceCount;
    linesCount = 0, tabCount = 0, spaceCount = 0;

    while((nc = getchar()) != EOF) {
        switch (nc) {
            case '\n':
                linesCount++;
                break;
            case '\t':
                tabCount++;
                break;
            case ' ':
                spaceCount++;
                break;        
        }
    }
    
    printf("%d spaces, %d tabs in %d lines", spaceCount, tabCount, linesCount);
}