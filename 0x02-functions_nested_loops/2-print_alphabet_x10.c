#include "main.h"

/**
 *print_alphabet_x10 - print letters of alphabet 10 times
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a' + 0;
		while (j < 'a' + 26)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
