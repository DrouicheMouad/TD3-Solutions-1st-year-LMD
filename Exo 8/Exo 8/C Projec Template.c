#include <stdio.h>

void Division(int a, int b, int* q , int* r) {
	if (a < b) {
		*q = 0; *r = a;
	}
	else {
		*q = 1;
		*r = 0;
		while (a - b * *q >= b) {
			*q= *q+1;
		}
		*r = a - b * *q;
	}
}
int main() {
	int a, b, q, r;
	printf("Enter a "); scanf("%d", &a);
	printf("Enter b "); scanf("%d", &b);
	Division(a, b, &q, &r);
	printf("Quotient = %d\n", q);
	printf("Rest = %d\n", r);


	return 0;
}