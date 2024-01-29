#include "main.h"

void output_digits(void);

int i, j, product, first_two, first_digit, second_digit, last_digit;

/**
 *print_times_table - print multiplication table from 0 to n
 *@n: largest number to multiply
 *Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (product < 100)
			{
				first_digit = product / 10;
			}
			else
			{
				first_two = product / 10;
				first_digit = first_two / 10;
				second_digit = first_two % 10;
			}
			last_digit = product % 10;

			output_digits();

				if (j < n)
					_putchar(',');


		}
		_putchar('\n');
	}
}

/**
 *output_digits - print digits to make above function shorter, betty compliant
 *Return: void
 */
void output_digits(void)
{
	if (j == 0)
	_putchar('0' + last_digit);
	else
	{
		if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + last_digit);
		}
		else if (product < 100)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + first_digit);
			_putchar('0' + last_digit);
		}
		else
		{
			_putchar(' ');
			_putchar('0' + first_digit);
			_putchar('0' + second_digit);
			_putchar('0' + last_digit);
		}
	}
}
