#include <stdio.h>
#include "main.h"

/**
 *main - prints putchar
 *Return: 0
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
