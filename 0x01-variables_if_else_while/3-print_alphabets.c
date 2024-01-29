#include <stdio.h>

/**
 *main - prints all letters of the alphabet
 *Return: 0
 */

int main(void)
{
	char c;
	char d;

	c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}

	d = 65;

	while (d < 91)
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
