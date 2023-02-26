#include <stdio.h>

/**
 *main -sum of fibonacci < 4,000,000
 *Return: 0
 */

int main(void)
{
	long i, fib, sum, curr, prev;

	prev = 1, curr = 2, sum = 2;

	for (i = 0; fib < 4000000; i++)
	{
		fib = curr + prev;
		if (fib % 2 == 0)
			sum += fib;
		prev = curr;
		curr = fib;
	}

	printf("%li\n", sum);

	return (0);
}
