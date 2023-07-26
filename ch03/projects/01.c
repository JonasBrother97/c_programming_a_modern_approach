#include <stdio.h>

int main(void)
{
  int mes, dia, ano;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mes, &dia, &ano);
  printf("You entered the date %d%.2d%.2d\n", ano, mes, dia);

  return 0;
}
