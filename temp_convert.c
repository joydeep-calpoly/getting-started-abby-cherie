#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main() {
	float celsius;
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	
	float fahrenheit = celsius_to_fahrenheit(celsius);
	printf("Temperature in Fahrenheit: %.2f°F\n",fahrenheit);

	if (fahrenheit >= 100) {
		printf("Warning: Heat Wave\n");
	} else if (fahrenheit >= 80) {
		printf("Hot\n");
	} else if (fahrenheit >= 41) {
		printf("Normal\n");
	} else {
		printf("Cold\n");
	}
	return 0;
}

float celsius_to_fahrenheit(float celsius) {
	return (celsius * 1.8f) + 32;
}
