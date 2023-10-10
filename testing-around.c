// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.18

#include <stdio.h>

#define BUFFER		1024

void getInput()
{
		int line[BUFFER];
		int i;
		while((i = getchar()) != EOF)
		{
		++i;
			if(line[i] == '\n')
			{
				++i;
				line[i] = '\0';
			}
		}
		for(i = 0; i < BUFFER; i++)
			printf("%d", line[i]);
}

int main()
{
	getInput();	
	return 0;
}
