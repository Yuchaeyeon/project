#include <stdio.h>

int main(void)
{
	int num1, num2 = 0;
	int n1, n2, n3 = 0;
	
	printf("���� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	n1 = (num1 & num2);
	n2 = (num1 | num2);
	n3 = (num1 ^ num2);

	printf("%d & %d = %d \n", num1, num2, n1);
	printf("%d | %d = %d \n", num1, num2, n2);
	printf("%d ^ %d = %d \n", num1, num2, n3);
	return 0;
}