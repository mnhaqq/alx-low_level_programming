#include <stdio.h>

/**
 *main - function to print numbers for 01 to 89 with no repititions
 *Return: 0
 */

int main(void)
{
	int i, j, k, m, n, num_loop1, num_loop2;

	i = '0';
	m = '0';
	n = '0' + 1;
	num_loop1 = '0';
	num_loop2 = '0' + 1;

	while (i < '0' + 8)
	{
		num_loop1++;
		j = num_loop
		while (j < '0' + 9)
		{
			num_loop2++;
			k = num_loop2;
			while (k < '0' + 10)
			{
				putchar(i);
				putchar(j);
				putchar(k);
			       	putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
