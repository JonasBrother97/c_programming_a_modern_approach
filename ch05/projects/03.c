#include <stdio.h>

int main(void)
{
  float commission, value, price, rival_commission;
  int share;

  printf("Enter number of shares: ");
  scanf("%d", &share);

  printf("Enter price per share: ");
  scanf("%f", &price);

  value = price * share;

  if (value < 2000.00f)
    rival_commission = 33.00f + 0.03f * share;
  else
    rival_commission = 33.00f + 0.02f * share;

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6350.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else
   commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Rival commission: $%.2f\nBrokers commission: $%.2f\n", rival_commission, commission);

  return 0;
}
