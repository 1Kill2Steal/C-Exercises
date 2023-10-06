// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.17

#include <stdio.h>

//defines the minimum required line length to print the text
#define MINLINELEN	80

//defines the total max length of the array
#define MAXARRLEN	100000

int main()
{
	int c, i, j;
	i = j = 0;
	char line[MAXARRLEN];

	while((c = getchar()) != EOF)
	{
		if(c != '\n')
		{
			++i;
		}
		else if(c == '\n' && i != 0)
		{
			++i;
			if(i > MINLINELEN)
			{
				for(j; j < i; j++)
					line[j] = c;
			}
			i = j = 0;
		}
	}
	printf("Lines that have more length than %d:", MINLINELEN);
	for(i=0; i < MAXARRLEN; i++)
		printf("%c", line[i]);
}

