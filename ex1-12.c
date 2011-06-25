#include <stdio.h>

#define IN 1
#define OUT 0
void main () {
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) printf("\n");
			state = OUT;
		} else {
			state = IN;
			putchar(c);
		}
	}
}
