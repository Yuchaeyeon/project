#include <stdio.h>

int Binarytrans(int n) 
{
	if (n == 0) {
		return;
	}
	else if (n > 0)
	{
		Binarytrans(n/2);
		printf("%d", n % 2);
	}
}

int main(void) 
{
	int n;
	printf("please enter a number: ");
	scanf_s("%d", &n);
	Binarytrans(n);
	return 0;
}