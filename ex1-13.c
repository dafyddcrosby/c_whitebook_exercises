#include <stdio.h>

#define HISTO_MAX 26

#define IN 1
#define OUT 0

void main () {
	int num_array[HISTO_MAX];
	int i, k, c, count, state, top;

	count = top = 0;
	for (i=0; i < HISTO_MAX; i++){
		num_array[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				state = OUT;
				if (count <= HISTO_MAX) {
					num_array[count] += 1;
				}
				count = 0;
			}
		} else {
			state = IN;
			count++;
		}
	}

	/* Horizontal histogram */
	for (i = 1; i < HISTO_MAX; i++) {
		printf("%2d ", i);
		for (k = 0; k < num_array[i]; k++) {
			putchar('X');
		}
		putchar('\n');
	}

	printf("\n\n\n");

	/* Vertical histogram */

	for (i = 1; i < HISTO_MAX; i++) {
		if (num_array[i] > top) top = num_array[i];
	}

	for (i = top; i > 0; i--) {
		for (k = 1; k < HISTO_MAX; k++) {
			if (num_array[k] >= i) {
				putchar('X');
			} else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
