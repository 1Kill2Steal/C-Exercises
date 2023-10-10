// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.18

#include <stdio.h>

#define BUFFER		1024

int printInput(char *line, int i)
void getInput()
{
		char line[BUFFER];
		int i;
		while((i = getchar()) != EOF)
		{
		++i;
		if(line[i] == '\n')
		{
			printf("\nString:\n%d", line);
			line[i+1] = '\0';
		}
	}
}

int main()
{
	int i = 0;
	int line[BUFFER];
	for (i = 0; i < BUFFER; i++)
		printf("%d" line[i];
	
	getInput();	
	return 0;
}
