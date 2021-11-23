#include <stdio.h>
#include <math.h>

double Standard(double* arr[]) {
	double standard;
	double num, sum = 0;

	for (int i = 0; i < 5; i++) {
		*arr[i] = pow(*arr[i], 2);
	}

	for (int i = 0; i < 5; i++) {
		num = *arr[i];
	}

	sum = num / 5;
	standard = sqrt(sum);
	printf("%f", standard);
}

int main (){
	double arr[5];

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("arr %f \n", arr[i]);
	}
	printf("Standard Deviation= ");
	Standard(arr);
	return 0;
}
