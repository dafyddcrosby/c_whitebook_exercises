#include <stdio.h>

void main () {
    int c, tabs, blanks, lines;
    c = tabs = blanks = lines = 0;

    while ((c = getchar()) != EOF) {
	if (c == ' ') blanks++;
	if (c == '\t') tabs++;
	if (c == '\n') lines++;
    }

    printf("blanks: %d\ntabs: %d\nlines %d\n", blanks, tabs, lines);
}
