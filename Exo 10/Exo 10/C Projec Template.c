#include <stdio.h>

int main() {
	int Password = 183721;
	int Input;
	do {
		printf("Use your password please : "); scanf("%d", &Input);
		if (Input != Password) {
			printf("Wrong Password !\n");
		}
	} while (Input != Password);

	printf("Welcome !\n");

	return 0;
}