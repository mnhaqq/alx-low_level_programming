#include "main.h"
#include <limits.h>

/**
 *print_last_digit - fxn to print the last digit of an integer
 *@n: number
 *Return: value of last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}

	if (n == INT_MIN)
	{
		_putchar('8');
		last_digit = 8;
		return (last_digit);
	}

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
