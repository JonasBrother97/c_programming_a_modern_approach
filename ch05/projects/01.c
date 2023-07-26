#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter number: ");
  scanf("%d", &n);

  if (n >=0 && n <= 9)
    printf("Number %d tem 1 dígito\n", n);
  else if  (n >= 10 && n <= 99)
    printf("Número %d tem 2 digitos\n", n);
  else if (n >= 100 && n <= 999)
    printf("Numero %d tem 3 digitos\n", n);
  else
   printf("Cansei");

  return 0;
}
