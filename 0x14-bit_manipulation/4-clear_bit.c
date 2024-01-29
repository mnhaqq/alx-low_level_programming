#include "main.h"

/**
 *clear_bit - function to clear bit at a specific index
 *@n: pointer to number
 *@index: index to be cleared
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
