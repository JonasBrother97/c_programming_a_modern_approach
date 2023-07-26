#include <stdio.h>

#define TRUE "teen"
#define FALSE "not teen"

int main(void)
{
  int age; 
  const char* teenager;

  printf("Idade: ");
  scanf("%d", &age);
  
  teenager = age >= 13 && age <= 19 ? TRUE : FALSE;
 
  printf("%s\n", teenager);

  return 0;

}
