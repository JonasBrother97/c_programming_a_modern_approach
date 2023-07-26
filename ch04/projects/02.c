#include <stdio.h>

int main(void)
{
  int i, j, k, a, b;

  printf("Enter 3 digit number: ");
  scanf("%d", &i);

  j = i % 10;
  k = i / 10;
  a = k / 10;
  b = k % 10;

  printf("The reversal is: %d%d%d\n", j, b, a);

  return 0;
}
