// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.19

#include <stdio.h>

#define BUFFER				1024

int getLine(int curLine[], int max);

int main()
{
	int input[BUFFER];
	int read = getLine(input, BUFFER);
	for(int i = 0; i < read; i++)
		printf("%c", input[i]);
	return 0;
}

int getLine(int curLine[], int max)
{
	int i = 0;
	int j = 0;
	int output = 0;
	int line[max];
	int c;
	while((c = getchar()) != EOF && i < max)
	{
		if(c == '\n' && i > 0)
		{
			for(i; i>=0; i--, j++)
			{
				curLine[j] = line[i];
			}
			output += j;
		}
		line[i] = c;
		i++;
	}
	
	if(output < max)
		return output; 
	else
		return printf("BUFFA OVERFLOW M8");
}
