#include "main.h"

/**
 *print_diagonal - fxn to print diagonal line in terminal
 *@n: number of times \ is printed
 *Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
