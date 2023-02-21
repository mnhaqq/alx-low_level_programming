#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - function to print alphabets
 *Return: void
 */

void print_alphabet(void)
{
	int i = 'a' + 0;

	while (i < 'a' + 26)
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
