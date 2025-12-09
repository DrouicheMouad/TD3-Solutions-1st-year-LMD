#include <stdio.h>

int main() {
	int a, b;
	printf("Enter a "); scanf("%d", &a);
	printf("Enter b "); scanf("%d", &b);
	if (a < b) {
		printf("\nQuotient = 0");
		printf("\nRest = %d", a);
	}
	else {
		int q = 1;
		int r = 0;
		while (a - b*q >= b) {
			q++;
		}
		r = a - b*q;
		printf("\nQuotient = %d", q);
		printf("\nRest = %d", r);
	}



	return 0;
}