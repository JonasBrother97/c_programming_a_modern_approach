#include <stdio.h>

int main(void)
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, 
  row1, row2, row3, row4, col1, col2, col3, col4;

  printf("Enter the numbers from 1 to 10 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
  
  printf("%2d %2d %2d %2d\n"
         "%2d %2d %2d %2d\n"
         "%2d %2d %2d %2d\n"
         "%2d %2d %2d %2d\n",
         n1, n2, n3, n4, 
         n5, n6, n7, n8, 
         n9, n10, n11, n12, 
         n13, n14, n15, n16);

  row1 = n1 + n2 + n3 + n4;
  row2 = n5 + n6 + n7 + n8;
  row3 = n9 + n10 + n11 + n12;
  row4 = n13 + n14 + n15 + n16;

  printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
  
  col1 = n1 + n5 + n9 + n13;
  col2 = n2 + n6 + n10 + n14;
  col3 = n3 + n7 + n11 + n15;
  col4 = n4 + n8 + n12 + n16;

  printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);

  return 0;
}
