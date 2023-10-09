// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.18

#include <stdio.h>

#define BUFFER		1024

void getInput()
{
	int c, i;
	char line[BUFFER];
	while((c = getchar()) != EOF)
	{
		i++;	
		line[i] = c;
		if(c == '\n')
		{
			printf("\nString:\n%c", line);
		}
	}
}

int main()
{
	getInput();	
	return 0;
}
