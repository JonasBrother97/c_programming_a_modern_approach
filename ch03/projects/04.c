#include <stdio.h>

int main(void)
{
  int ddd, tres, quatro;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &ddd, &tres, &quatro);
  printf("You entered %d.%d.%d\n", ddd, tres, quatro);

  return 0;
}
