#include "main.h"

/**
 *flip_bits - function to determine the number of bits to flip to
 *get from one number to another
 *@n: first number
 *@m: second number
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int i, displayMask, flipped = 0;

	for (i = 1; i <= 64; i++)
	{
		displayMask = num >> i;
		if (displayMask & 1)
			flipped += 1;
	}
	return (flipped);
}
