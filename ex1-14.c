#include <stdio.h>

// Yes, I realize that this doesn't handle Unicode.
// I'll live, you'll live, we'll all live.
#define CHARLIMIT 128

void main () {
	int ch_array[CHARLIMIT];
	int c, i, j;

	for (i = 0; i < CHARLIMIT; i++) {
	       ch_array[i] = 0;
	}	       

	while ((c = getchar()) != EOF) {
 		++ch_array[c];
	}

	// We'll start at 33 to avoid special characters
	for (i = 33; i < CHARLIMIT; i++) {
		if (ch_array[i] > 0) {
			printf("%c - ", i);
			for (j = 0; j < ch_array[i]; j++) {
				putchar('X');
			}
			putchar('\n');
		}
	}
}	
