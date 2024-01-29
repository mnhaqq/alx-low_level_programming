#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes from second string
 *Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
		;
	k = i + j + 1;

	s = malloc(k);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(s + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
	{
		*(s + i) = *(s2 + j);
	}
	*(s + i) = '\0';

	return (s);
}
