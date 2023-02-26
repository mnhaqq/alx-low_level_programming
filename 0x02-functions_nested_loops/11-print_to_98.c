#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - print to 98
 *@n: number to start from
 *Return: void
 */

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}

	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}

	printf("98\n");

}
