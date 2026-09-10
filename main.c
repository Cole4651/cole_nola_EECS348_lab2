#include <stdio.h>

int isOdd(int number);

int main(void)
{
	int number;

	printf("Enter an integer: ");
	if (scanf("%d", &number) != 1) {
		fprintf(stderr, "Invalid input. Please enter an integer.\n");
		return 1;
	}

	if (isOdd(number)) {
		printf("%d is odd\n", number);
	} else {
		printf("%d is even\n", number);
	}

	return 0;
}
