// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.17

#include <stdio.h>
#include <string.h>

//defines the minimum required line length to print the text:
#define MINLINELEN	80

//max possible user input size:
#define BUFFER		1024

int moreThanMinChars(char *line, int count);
void processLines();

int main()
{
	printf("Enter text:\n");

	processLines();

	return 0;
}

int moreThanMinChars(char *line, int count)
{
	return count > MINLINELEN;
}

void processLines()
{
	char line[BUFFER];
	char allLines[BUFFER][BUFFER];
	int allLineCount = 0;
	int count = 0;
	int c;
	
	while((c = getchar()) != EOF)
	{
		if(count < sizeof(line) - 1)
		{
			line[count] = c;
			count++;
		}
		
		if (c == '\n')
		{
			line[count] = '\0';
			if(moreThanMinChars(line, count))
			{
				strcpy(allLines[allLineCount], line);
				allLineCount++;
			}
			count = 0;
		}
	}
	for(int i = 0; i < allLineCount; i++)
	{
		printf("%s\n", allLines[i]);
	}
}
