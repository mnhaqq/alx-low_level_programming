#include "main.h"

/**
 *more_numbers - (0-14) x 10
 *Return: void
 */

void more_numbers(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			a = '0' + j / 10;
			b = '0' + j % 10;

			if (j > 9)
			{
				_putchar(a);
			}
			_putchar(b);
		}

		_putchar('\n');
	}
}
