#include <stdio.h>

int main() {
	float n;
	float Sum = 0;
	do {
		printf("Enter a positive integer "); scanf("%f", &n);
	} while (n <= 0);

	for (float i = 1; i <= n; i++) {
		Sum += (float)(1 / i);
	}
	printf("The Harmonic Sum is %f", Sum);

	return 0;
}