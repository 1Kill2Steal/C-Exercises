#include <stdio.h>

int main() {

    // just testing how it'd work with a switch statement

    int nc, linesCount = 0, tabCount = 0, spaceCount = 0;

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