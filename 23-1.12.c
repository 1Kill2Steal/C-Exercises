#include <c++/13.2.1/variant>
#include <stdio.h>

#define IN      1 // no new word
#define OUT     0 // new word

int main() {
    int c, state;
    
    state = OUT;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
            
        else if (state == OUT) {
            state = IN;
            putchar('\n');
        }
        putchar(c);
    }
}