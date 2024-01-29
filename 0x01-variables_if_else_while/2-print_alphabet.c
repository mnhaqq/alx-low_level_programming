#include <stdio.h>

/**
 *main - prints all letters of the alphabet
 *Return: 0
 */

int main(void)
{
	char c;

	c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
