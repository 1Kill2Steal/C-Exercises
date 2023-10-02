#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  // min value (also starting value later)
    upper = 300; // max value
    step = 20; // increment rate

    fahr = lower;
    printf("Fahrenheit | Celsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t    %6d\n", fahr, celsius);
        fahr += step;
    }
}