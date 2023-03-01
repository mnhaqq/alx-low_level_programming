#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string
 *Return: void
 */

void rev_string(char *s)
{
	int i, j, a, b;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = --i;
	for (i = 0; j > i; i++, j--)
	{
		a = s[i];
		b = s[j];
		s[i] = b;
		s[j] = a;
	}
}
