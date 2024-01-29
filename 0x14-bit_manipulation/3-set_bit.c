#include "main.h"

/**
 *set_bit - function to set the bit at a particular index
 *@n: pointer to number
 *@index: index to set bit
 *Return: 1 if successful and 0 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
