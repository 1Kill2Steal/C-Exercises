#include <stdio.h>

#define OUT     0
#define IN      1

int main() {
    int c, i, counter, wordCounter, state;
    int wordLength[100];

    i = counter = wordCounter = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
	
        if (c == ' ' || c == '\t' || c == '\n') { 
            state = OUT;
            --counter;
        }
	    else if (state == OUT) {
            state = IN;
	        wordLength[wordCounter] = counter;
            counter = 0;
	        wordCounter++;	    
	    }
    
        ++counter;

    }
    
    wordLength[wordCounter] = counter;

    printf("\nword lengths:\n");
    for(i = 1; i <= wordCounter; ++i) {
        printf("Word %d length: %d\n", i, wordLength[i]);
    }
    
}
