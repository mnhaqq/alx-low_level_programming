#include <stdio.h>

/**
 *print_diagsums - function to prints the sum of the two diagonals of a square
 *matrix
 *@a: pointer to matrix
 *@size: size of matrix
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, first_diagonal, second_diagonal;

	first_diagonal = second_diagonal = 0;
	for (i = 0; i < size; i++)
	{
		first_diagonal += a[(size * i) + i];
		second_diagonal += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", first_diagonal, second_diagonal);
}
