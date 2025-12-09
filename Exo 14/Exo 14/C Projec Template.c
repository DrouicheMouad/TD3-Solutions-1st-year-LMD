#include <stdio.h>

int main() {
	int Height;
	printf("Enter the hieght "); 
	scanf("%d", &Height);
	for (int i = 1; i <= Height; i++) {
		for (int j = 1; j <= i; j++) {
			if (i <= 2) {
				printf("*");
			}
			else if(i<Height) {
				printf("*");
				for (j = 2; j < i; j++) {
					printf(" ");
				}
				printf("*");
			}
			else
				for (j = 1; j <= Height; j++) {
					printf("*");
				}
		}
		printf("\n");
	}
	return 0;

}