#include <stdlib.h>

/**
 *array_range - function to create an array of integers
 *@min: minimum value in array
 *@max: maximum value in array
 *Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i, n = max - min + 1;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		arr[i] = min + i;

	return (arr);
}
