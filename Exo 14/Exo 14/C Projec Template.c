#include <stdio.h>

int main() {
	int Height;
	printf("Enter the height ");
	scanf("%d", &Height);
	for (int i = 1; i <= Height; i++) {
		if (i <= 2) {
			for (int j = 1; j <= i; j++)
				printf("*");
		}
		else if (i < Height) {
			printf("*");
			for (int j = 2; j < i; j++) {
				printf(" ");
			}
			printf("*");
		}
		else
			for (int j = 1; j <= Height; j++) {
				printf("*");
			}
		printf("\n");
	}
	return 0;

}