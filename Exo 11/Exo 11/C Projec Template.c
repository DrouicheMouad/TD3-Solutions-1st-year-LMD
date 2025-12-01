#include <stdio.h>
#include <math.h>
int factorial(int N) {
	if (N == 0) {
		return 1;
	}
	else {
		int Result = 1;
		for (int i = 1; i <= N; i++) {
			Result *= i;
		}
		return Result;
	}

}

int main() {
	// 11 Développement limité de sin au voisinage de 0  
	float x;
	int n, oddIndex;
	double Sum = 0;

	printf("Enter the value of x ( x must be near 0 for correct approximation ) ");
	scanf("%f", &x);
	printf("Enter the number of terms you want ");
	scanf("%d", &n);

	printf("\nsin(%f) = \n", x);
	for (int i = 0; i < n; i += 1) {
		oddIndex = 2 * i + 1;
		Sum += pow(-1, i) * (pow(x, oddIndex) / factorial(oddIndex));
		printf("(-1^%d) * (%f^%d)/(%d!) + \n", i, x, oddIndex, oddIndex);
	}
	printf("\n= %lf \n", Sum);


	return 0;
}