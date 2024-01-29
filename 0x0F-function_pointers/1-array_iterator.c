#include <stdio.h>

/**
 * array_iterator - function that executes another
 * function given as a parameter
 * @array: array to be passed into function executed
 * @size: size of @array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
