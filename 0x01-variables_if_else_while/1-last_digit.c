#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - checks value of last digit
 *Return: 0
 */

int main(void)
{
	int n;
	int output;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	output = n % 10;

	if (output > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, output);
	}
	else if (output < 6 && output != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, output);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, output);
	}
	return (0);
}
