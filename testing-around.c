// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.18

#include <stdio.h>

#define BUFFER		1024

void getInput()
{
	int i = 0;
	char line[BUFFER];
	while((line[i] = getchar()) != EOF)
	{
		i++;	
		if(line[i] == '\n')
		{
			printf("\nString:\n%d", line);
			line[i+1] = '\0';
		}
	}
}

int main()
{
	getInput();	
	return 0;
}
