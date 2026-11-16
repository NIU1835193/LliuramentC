#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float far;
	far=temperatura*(9/5)+32;
	printf("Temperatura: %d graus\n", temperatura);
	printf("Fahrenheit: %.2f graus\n", far);
	return 0;
}

