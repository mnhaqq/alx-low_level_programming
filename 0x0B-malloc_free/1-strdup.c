#include <stdlib.h>

/**
 *_strdup - function that duplicates a string
 *@str: string to be duplicated
 *Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, n;
	char *new_string;

	if (str == NULL)
		return (NULL);
	new_string = malloc(sizeof(str));
	if (new_string == NULL)
		return (NULL);

	for (i = 0, n = sizeof(str) + 1; i < n; i++)
		*(new_string + i) = *(str + i);

	return (new_string);
}
