#include <stdio.h>

int main() {
	// Read 10 numbers and sum only positive ones 
	float Sum = 0;
	float x;
	for (int i = 1; i <= 10; i++) {
		printf("Enter a poistive number "); scanf("%f", &x);
		if (x < 0) {
			printf("Negative numbers are ignored \n");
			continue;
		}
		Sum += x;
	}
	printf("Sum = %f", Sum);

	return 0;
}