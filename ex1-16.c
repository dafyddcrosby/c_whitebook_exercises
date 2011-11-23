#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline2(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("line length: %i\n%s", max, longest);
	return 0;
}

/* renamed to getline2 since getline is declared in stdio.h */
int getline2(char line[], int maxline)
{
	int c, i;
	for (i = 0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
