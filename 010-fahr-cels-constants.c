#include <stdio.h>

#define UPPER   300
#define LOWER   0
#define STEP    20

int main() {
    printf("Fahrenheit to celsius:\n");
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%3.1f\n", fahr, (fahr-32) * (5.0/9.0));
}