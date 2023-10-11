// this file is only for writing and testing
// code, finished projects are elsewhere,
// currently working on: 032-1.18


#include <stdio.h>

#define BUFFER						1024
#define NO_CHAINED_NEW_LINES		1
#define NEW_LINE					0
#define	NO_EXCESS_WHITESPACE		1
#define NEW_WORD					0

int getInput(int line[], int max)
{
    int i = 0;
	int c;
	int nl, nw, word;
	nl = NEW_LINE;
	nw = NEW_WORD;

    while ((c = getchar()) != EOF && i < max)
    {
		if(c == '\n' && nl == NO_CHAINED_NEW_LINES)
		{
			nl = NEW_LINE;
			line[i] = c;
			++i;
		}
		else if( (c == '\t' || c == ' ') && nw == NO_EXCESS_WHITESPACE)
		{
			nw = NEW_WORD;
			line[i] = c;
			++i;
		}
		else if(c != '\n' && c != '\t' && c != ' ')
		{
			nw = NO_EXCESS_WHITESPACE;
			nl = NO_CHAINED_NEW_LINES;
			line[i] = c;
			++i;
		}
	}

    return i;
}

int main()
{
    int input[BUFFER];
    int read = getInput(input, BUFFER);

    for (int i = 0; i < read; i++)
        printf("%c", input[i]);

    return 0;
}
