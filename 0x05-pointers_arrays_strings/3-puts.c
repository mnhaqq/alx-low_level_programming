#include "main.h"
/**
 *_puts - print string with newline at end
 *@str: string to be printed
 *Return: void
 */

void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
}
