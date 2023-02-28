#include "main.h"

/**
 *puts2 - print every other character of a string
 *@str: string
 *Return: void
 */

void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
}
