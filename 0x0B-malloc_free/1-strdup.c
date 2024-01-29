#include <stdlib.h>
#include <stdio.h>

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

	for (i = 0; str[i] != '\0'; i++)
		;
	n = i + 1;

	new_string = malloc(n);
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		*(new_string + i) = *(str + i);

	return (new_string);
}
