#include <stdio.h>

/**
 *main - numbers
 *Return: 0
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
			i++;
		}
	}
	putchar('\n');
	return (0);
}
