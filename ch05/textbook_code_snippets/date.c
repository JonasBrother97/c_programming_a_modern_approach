/* Prints a date in legal form */

#include <stdio.h>

int main(void)
{
  int month, day, year;
  
  printf("Enter date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);
  
  printf("Dated this %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 33:
      printf("rd"); break;
    default: printf("th"); break;
  }
  printf(" day of ");

  switch (month) {
    case 1: printf("January"); break;
    case 2: printf("Fevereiro"); break;
    default: printf("mes escrever cansei");
  }
  printf(", 20%.2d.\n", year);
  return 0;
}

