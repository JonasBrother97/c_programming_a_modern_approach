#include <stdio.h>

int main(void)
{
  int i, j, k, l, m, n;

  printf("Enter a number entre 0 e 32767: ");
  scanf("%d", &i);

  j = i % 8;
  k = (i / 8) % 8;
  l = ((i / 8) / 8) % 8;
  m = (((i / 8) / 8 ) / 8 ) % 8;
  n = ((((i / 8) / 8 ) / 8 ) / 8 ) % 8;

  printf("In ocatal = %d%d%d%d%d\n", n, m, l, k, j);

  return 0;
}
