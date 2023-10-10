// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.18

#include <stdio.h>

#define BUFFER        1024

int getInput(int line[], int max)
{
        int i = 0;
        while((i = getchar()) != EOF && i < max)
        {
            line[i] = i;
            ++i;
        }
		return i;
}

int main()
{
	int input[BUFFER];
	int read = getInput(input, BUFFER);  
    for(int i = 0; i < read; i++)
        printf("%d", input[i]);
    return 0;
}
