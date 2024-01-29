#include "main.h"

/**
 *get_endianness - function to check endinness
 *Return: 1 or 0
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
		return (1);
	return (0);
}
