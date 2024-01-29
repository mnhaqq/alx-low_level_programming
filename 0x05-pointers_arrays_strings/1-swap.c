#include "main.h"
/**
 *swap_int - swap the value of 2 int variables
 *@a: pointer to first integer variable
 *@b: pointer to second integer variable
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
