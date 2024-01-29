#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory
 *@b: number of bytes
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocated = malloc(b);

	if (allocated == NULL)
		exit(98);
	return (allocated);
}
