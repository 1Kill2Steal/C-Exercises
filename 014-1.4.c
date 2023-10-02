#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  // min value (also starting value later)
    upper = 300; // max value
    step = 20; // increment rate

    celsius = lower;
    printf("Fahrenheit | Celsius\n");
    while (celsius <= upper) {
        fahr = 5 * (fahr-32) / 9;
        printf("%d\t    %d\n", celsius, fahr);
        celsius += step;
    }
}