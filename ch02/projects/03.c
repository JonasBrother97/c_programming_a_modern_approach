#include <stdio.h>
#define FIXO (4.0f / 3.0f)

int main(void)
{
	float volume, pi = 3.14;
	int radius;

	
	printf("Enter value of radius: ");
	scanf("%d", &radius);
	
	volume = FIXO * pi * radius * radius * radius;

	printf("Volume = %2.f\n", volume);

	return 0;
}
