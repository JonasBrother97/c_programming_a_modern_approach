#include <stdio.h>

int main(void)
{
  int i, j, k;

  printf("Enter 2 digit number: ");
  scanf("%d", &i);

  j = i % 10;
  k = i / 10;

  printf("The reversal is: %d%d\n", j, k);

  return 0;
}
