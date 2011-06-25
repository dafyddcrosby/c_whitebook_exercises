#include <stdio.h>

#define TRUE 1
#define FALSE 0

void main () {
    int c, state;

    state = 0;

    while ((c = getchar()) != EOF) {
	if (c == ' ') {
            if (state == FALSE) {
		state = TRUE;
		putchar(c);
            } else {
		/* Last one was also a space */
            }
	} else {
	    state = FALSE;
	    putchar(c);
        }
    }
}
