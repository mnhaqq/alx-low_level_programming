#include "main.h"

/**
 *print_triangle - fxn to print right angles triangle
 *@size: size of traingle
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - (i + 1))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
