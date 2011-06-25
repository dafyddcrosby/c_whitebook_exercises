#include <stdio.h>

#define UPPER 40
#define LOWER 0
#define STEP 2

main () {
	float fahr, celsius;

	printf("Fahr\tCelsius\n");
	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP){
		fahr = ((9.0/5.0) * celsius) + 32;
		printf("%3.1f\t%6.1f\n",fahr,celsius);
	}
}
