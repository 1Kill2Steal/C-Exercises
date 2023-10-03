#include <stdio.h>

#define LOWER   0.0
#define UPPER   300.0
#define STEP    20.0

float celsToFahr(float fahr);

int main()
{
    float i;

    printf("Celsius\t\tFahrenheit (w/ functions)\n");

    for(i = 0.0; i <= UPPER; i += STEP)
        printf("%7.1f\t\t%10.1f\n", i, celsToFahr(i));
    
    return 0;
}

float celsToFahr(float fahr)
{
    fahr = (fahr * 9.0/5.0) + 32.0;
    
    return fahr;
}