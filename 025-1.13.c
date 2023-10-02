#include <stdio.h>

#define IN      1 // no new word
#define OUT     0 // new word

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
	    else if (state == OUT) { // i don't know about this warning, but it causes no issues.
            state = IN;
	        wordLength[wordCounter] = counter;
            counter = 0;
	        wordCounter++;	    
	    }
    
        ++counter;

    }
    
    wordLength[wordCounter] = counter; //this part exists to check the last word assuming there's no white space.

    printf("\nword lengths:\n");
    for(i = 1; i <= wordCounter; ++i) {
        printf("Word %d length: %d\n", i, wordLength[i]);
    }
    
}
