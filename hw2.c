#include <stdio.h>

int main(void)
{
	float num1, mile = 0;

	printf("Please enter kilometers: ");
	scanf_s("%f", &num1);

	mile = num1 / 1.609;

	printf("%.1f km is equal to %.1f miles", num1, mile);
	return 0;
}