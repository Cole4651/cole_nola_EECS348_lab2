#include <stdio.h>

int isOdd(int number);

int main(void)
{
	int number = 7;

	if (isOdd(number)) {
		printf("%d is odd\n", number);
	} else {
		printf("%d is even\n", number);
	}

	return 0;
}
