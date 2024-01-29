#include <stdlib.h>

/**
 *str_concat - function to join 2 strings
 *@s1: starting string
 *@s2: string to be appended
 *Return: pointer to new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	n = i + j + 1;

	s = malloc(n);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(s + i) = *(s1 + i);
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		*(s + i) = *(s2 + j);
	}
	*(s + i) = '\0';

	return (s);
}
