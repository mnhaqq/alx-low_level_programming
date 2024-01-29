#include "main.h"

/**
 *get_bit - function to get the bit at a specific index
 *@n: number
 *@index: index to get bit ftom
 *Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
