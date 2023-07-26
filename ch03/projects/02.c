#include <stdio.h>

int main(void)
{
  int item, mes, dia, ano;
  float preco;

  printf("Enter item number: ");
  scanf("%d", &item);
  printf("Enter unit price: ");
  scanf("%f", &preco);
  printf("Enter purchase date (mm/dd/yyyy/): ");
  scanf("%d/%d/%d", &mes, &dia, &ano);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%d\n", item, preco, mes, dia, ano);

  return 0;
}
