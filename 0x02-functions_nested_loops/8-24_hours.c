#include "main.h"

/**
 *jack_bauer - print all seconds in a day
 *Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = '0';

	while (i < '0' + 3)
	{
		j = '0';
		while (j < '0' + 10)
		{
			k = '0';
			while (k < '0' + 6)
			{
				l = '0';
				while (l < '0' + 10)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
			if ((i == '0' + 2) && (j == '0' + 4))
			{
				break;
			}
		}
		i++;
	}
}
