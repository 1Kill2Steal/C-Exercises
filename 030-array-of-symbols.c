#include <stdio.h>

//defines the longest length of the char array.
#define MAXLINE		1000

int getline(char line[], int maxline); // i don't know how to make it work...
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE]; //current line
	char longest[MAXLINE]; //longest line
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	
	if (max > 0)
		printf("%s", longest);
	
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
}

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
