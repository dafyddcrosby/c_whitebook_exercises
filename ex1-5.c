#include <stdio.h>

main () {
	float fahr, celsius;

	printf("Fahr\tCelsius\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20){
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);
	}
}
