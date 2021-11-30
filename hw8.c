#include <stdio.h>

char convCase(char str[])
{
	int i = 0;

	for (i = 0; i < sizeof(str); i++) {
		const int diff = 'a' - 'A';
		if (str[i] >= 'A' && str[i] <= 'Z')
			return str[i] + diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			return str[i] - diff;
		else if ('Z' < str[i] && str[i] < 'a')
			return str[i];
		else if ('SP' < str[i] && str[i] < 'A')
			return str[i];
		else
			return -1;
	}
	
}

int main() {
	char str[50];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	int i;


	convCase(str);

	for (i = 0; i < sizeof(str); i++) {
		if (str[i] == -1)
			return -1;

		printf("Output> ");
		for (i = 0; i < sizeof(str); i++)
			putchar(str[i]);

		return 0;
	}
}