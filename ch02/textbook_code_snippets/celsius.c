
#include <stdio.h>

int main(void)
{
	float farenheit, celsius;

	printf("Valor de Farenheit: ");
	scanf("%f", &farenheit);
	
	celsius = (farenheit - 32.0) / 1.8;

	printf("%.1f graus Celsius\n", celsius);

	return 0;
}
