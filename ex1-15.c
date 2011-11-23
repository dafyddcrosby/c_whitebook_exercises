#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float convert_fahrenheit_to_celsius(float fahr);

float convert_fahrenheit_to_celsius(float fahr) {
	float celsius;
	celsius = (5.0/9.0) * (fahr-32);
	return celsius;
}

main () {
	float fahr, celsius;

	printf("Fahr\tCelsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%3.0f\t%6.1f\n",fahr,convert_fahrenheit_to_celsius(fahr));
	}
}
