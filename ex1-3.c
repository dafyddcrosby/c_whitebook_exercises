#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

main () {
	float fahr, celsius;

	printf("Fahr\tCelsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);
	}
}
