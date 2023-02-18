#include <stdio.h>

/**
 *main -exceot q and e
 *Return: 0
 */

int main(void)
{
	char c;

	c = 97;

	while (c < 123)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
