#include <stdio.h>

/**
 *main - print first 50 fibonacci numbers
 *Return: 0
 */

int main(void)
{
	unsigned long i, prev, curr, fib;

	prev = 1;
	curr = 2;
	printf("%li, %li", prev, curr);

	for (i = 2; i < 99; i++)
	{
		fib = curr + prev;
		printf(", %lu", fib);
		prev = curr;
		curr = fib;
	}
	printf("\n");
	return (0);
}
