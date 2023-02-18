#include <stdio.h>

/**
 *main - numbers
 *Return: 0
 */

int main(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
