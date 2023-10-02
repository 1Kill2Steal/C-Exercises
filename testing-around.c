#include <stdio.h>

int main() {
    const char * z = "testing one two three";
    int m;
    int charcount;

    charcount = 0;
    for(m=0; z[m]; m++) {
        if(z[m] != ' ') {
            charcount ++;
        }
    }
}
