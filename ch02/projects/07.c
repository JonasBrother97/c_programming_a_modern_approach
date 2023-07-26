#include <stdio.h>

int main(void)
{
	int x, resto20, resto10, resto5, resto1;

	printf("Coloque valor: ");
	scanf("%d", &x);

	resto20 = x / 20;
	resto10 = x - (20 * resto20);
	resto5 = resto10 - (10 * (resto10/10));
	resto1 = resto5 - (5 * (resto5/5));

	printf("%d Notas de 20\n", resto20);
	printf("%d Notas de 10\n", resto10 / 10);
	printf("%d Notas de 5\n", resto5 / 5);
	printf("%d Notas de 1\n", resto1 / 1);

	return 0;

}
