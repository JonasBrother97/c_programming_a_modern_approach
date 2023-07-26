#include <stdio.h>

int main(void)
{
  int h, m;

  printf("Enter a 24 hora time (hh:mm): ");
  scanf("%d:%d", &h, &m);
  
  if (h <= 11)
    printf("Equivalente: %.2d:%.2d am\n", h, m);
  else if (h == 24)
      printf("Equivalente: 12:%.2d am", m);
  else if (h >= 13)
    printf("Equivalente: %.2d:%.2d pm\n", h - 12, m);
  else
   printf("Equivalente: 12:%.2d pm\n", m);

  return 0;
}
