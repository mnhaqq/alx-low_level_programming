#include <stdio.h>

/**
 *print_array - print n elements of array of integers
 *@a: pointer to array
 *@n: number of elements to print
 *Return: void
 */

void print_array(int *a, int n)
{
	int i, m;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%i", *a);

	i = 1;
	while (i < n)
	{
		m = *(a + i);
		printf(", %i", m);
		i++;
	}
	printf("\n");
}
