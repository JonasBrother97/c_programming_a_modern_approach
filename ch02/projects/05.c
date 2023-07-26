#include <stdio.h>

int main(void)
{
	float x, x2, x3, x4, x5, total;

	printf("Enter value of X: ");
	scanf("%f", &x);
	
	x2 = x * x;
	x3 = x2 * x;
	x4 = x3 * x;
	x5 = x4 * x;
	total = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;

	printf("Total = %.2f\n", total);

	return 0;

}

