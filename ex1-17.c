#include <stdio.h>
#define MIN 80 

#define TRUE 1
#define FALSE 0

main()
{
	int len, i, c, sentence;
	char line[MIN];

	len = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			if (len < MIN) {
				line[len] = c;
				++len;
				if (len == MIN) {
					printf("%s", line);
					sentence = TRUE;
				}
			} else {
				putchar(c);
			}
		} else {
			if (sentence == TRUE)
				putchar('\n');
			sentence = FALSE;
			len = 0;
		}
	}
}
