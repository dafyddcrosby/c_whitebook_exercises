/* Make a program to remove trailing whitespace and blank lines */
#include <stdio.h>

#define MAXLINE 1000

int main() {
    int i, c, llength, lastchar;
    char line[MAXLINE];
    
    llength = 0;
    lastchar = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (lastchar != 0) {
                for (i = 0; i < lastchar; i++) {
                    printf("%c", line[i]);
                }
                printf("\n");
            }
            llength = 0;
            lastchar = 0;
        } else {
            // Prevent overflow
            if (llength >= MAXLINE) continue;
            
            line[llength] = c;
            llength += 1;
            if (c != ' ' && c != '\t') {
                lastchar = llength;
            }
        }
    }
}