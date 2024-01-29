#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an integer
 *@b: binary number
 *Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0, exponent = 1, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	len -= 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		decimal += (b[len] - 48) * exponent;
		exponent *= 2;
		len--;
	}
	return (decimal);
}
