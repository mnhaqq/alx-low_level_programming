#include "main.h"

/**
 *times_table - multiplication 0 to 9
 *Return: void
 */

void times_table(void)
{
	int i, j, product, first_digit, second_digit;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = (i * j);
			first_digit = '0' + (product / 10);
			second_digit = '0' + (product % 10);

			if (j == 0)
			{
				_putchar(second_digit);
			}
			else if (j < 10)
			{
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(second_digit);
				}
				else
				{
					_putchar(' ');
					_putchar(first_digit);
					_putchar(second_digit);
				}
			}
			if (j < 9)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
