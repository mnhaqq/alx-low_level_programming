#include "main.h"
#include <stdio.h>

/**
 *puts_half - print second hald of string
 *@str: string
 *Return: void
 */

void puts_half(char *str)
{
	int i, half, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
