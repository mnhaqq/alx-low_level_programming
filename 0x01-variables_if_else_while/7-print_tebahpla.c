#include <stdio.h>

/**
 *main - prints all letters of the alphabet
 *Return: 0
 */

int main(void)
{
	char c;

	c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
