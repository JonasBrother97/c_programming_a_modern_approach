#include <stdio.h>
#define TAXA 0.05f

int main(void)
{
	float quanto, total;

	printf("Valor: ");
	scanf("%f", &quanto);

	total = (quanto * TAXA) + quanto;

	printf("Com taxa de 5% = %.2f\n", total);

	return 0;
}
