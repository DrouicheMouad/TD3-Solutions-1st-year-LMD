#include <stdio.h>

int main() {
	// 03 Read 20 numbers and determine the max 
	float x, Max;
	printf("Enter a real number "); scanf("%f", &x);
	Max = x;
	for (int i = 1; i <= 19; i++) {
		printf("Enter a real number "); scanf("%f", &x);
		if (x > Max) {
			Max = x;
		}
	}
	printf("The max is %f", Max);

	return 0;
}