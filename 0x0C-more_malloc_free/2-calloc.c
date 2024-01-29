#include <stdlib.h>

void *_memset(void *ptr, int value, unsigned int num);

/**
 *_calloc - function to allocate memory for an array
 *@nmemb: number of elements
 *@size: size of each unit
 *Return: pointer to allocated memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int n = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, n);
	return (p);
}

/**
 *_memset - function to set memory to a constant byte
 *@ptr: pointer to allocated memory
 *@value: value of byte
 *@num: number of bytes to be set
 *Return: pointer to memory
 */

void *_memset(void *ptr, int value, unsigned int num)
{
	unsigned int i;
	unsigned char *p = ptr;
	unsigned char v = value;

	for (i = 0; i < num; i++)
	{
		*p++ = v;
	}

	return (ptr);
}
