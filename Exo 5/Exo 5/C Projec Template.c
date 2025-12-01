#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void NisPrime(int N) {
	if (N==2 || N==3) {
		printf("%d is prime \n", N);
	}
	else {
		int End = N / 2;
		bool NisPrime = 0;
		for (int i = 2; i <= End; i++) {
			if (N % i == 0) {
				NisPrime = 0;
				break;
			}
			else {
				NisPrime = 1;
			}
		}
		if (NisPrime == 1) {
			printf("%d is prime \n", N);
		}
	}
}
int Max(int x, int y) {
	if (x <= y)
		return y;
	else
		return x;
}

int main() {
	// 05 Find all prime numbers between x and y 
	int x, y;
	printf("Enter a positive integer x :"); scanf("%d", &x);
	printf("Enter a positive ieteger y :"); scanf("%d", &y);
	while (x < 0) {
		printf("Enter a positive integer x :"); scanf("%d", &x);
	}
	while (y < 0) {
		printf("Enter a positive ieteger y :"); scanf("%d", &y);
	}
	int max = Max(x, y);
	int min = x + y - max;

	printf("Finding prime numbers in this interval [%d , %d]\n", min, max);
	for (int i = min; i <= max; i++) {
		NisPrime(i);
	}


	return 0;
}