#include <stdio.h>

float XPowern(float number, int power) {
	if (power == 0) {
		return 1;
	}
	else {
		float Result = 1;
		int i = 1;
		while (i <= power) {
			Result *= number;
			i++;
		}
		return Result;
	}
}
int main() {
	int n; float x;
	printf("Enter a number "); scanf("%f", &x);
	do {
		printf("Enter the power you want to raise %f to ", x); scanf("%d", &n);
		if (n < 0) {
			printf("You must enter a positive integer\n");
		}
	} while (n < 0);
	printf("%f to the power %d equals %f", x, n, XPowern(x, n));
	return 0;
}
