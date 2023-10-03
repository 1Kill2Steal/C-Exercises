#include <stdio.h>

int power(int m, int n); // m^n

int main() {
    int i;

    for (i = 0; i < 10; ++i) 
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

int power(base, n)
    int base, n; // old way of declaring functions in C
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}