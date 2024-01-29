#include <stdlib.h>

/**
 * int_index - function that searches for an integer from an array
 * @array: array to be searched
 * @size: size of @array
 * @cmp: pointer to function to compare values
 * Return: index of element of array or -1 if no element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
