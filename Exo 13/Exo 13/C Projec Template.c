#include <stdio.h>

int main() {
	int Lines, Columns;
	printf("Enter the number of lines "); scanf("%d", &Lines);
	printf("Enter the number of columns "); scanf("%d", &Columns);
	for (int i = 1; i <= Lines; i++) {
		for (int j = 1; j <= Columns; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}