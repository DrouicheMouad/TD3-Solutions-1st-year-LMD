#include <stdio.h>
#include <math.h>

int main() {
	// 02 Print all divisors of N
	int N;
	printf("Enter an integer "); scanf("%d", &N);
	for (int i = 1; i <= ceil(N / 2); i++) {
		if (N % i == 0) {
			printf("%d is a divisor of %d\n", i, N);
		}
	}
	printf("%d is a divisor of %d\n", N, N);


	return 0;
}