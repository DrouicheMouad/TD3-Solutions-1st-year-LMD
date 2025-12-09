#include <stdio.h>

int main() {
	int N;
	printf("Enter a number N "); scanf("%d", &N);
	if (N == 0)
		printf("0! = 1 \n");
	else {
		printf("%d! = ", N);
		int Factorial = 1;
		do {
			Factorial *= N;
			N--;
		} while (N > 0);
		printf("%d\n",Factorial);
	}
	return 0;
}