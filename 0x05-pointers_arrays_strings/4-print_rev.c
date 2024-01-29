#include "main.h"
#include <stdio.h>
/**
 *print_rev - print a string in reverse
 *@s: string
 *Return: void
 */

void print_rev(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		c = s[j];
		_putchar(c);
	}
	_putchar('\n');
}
