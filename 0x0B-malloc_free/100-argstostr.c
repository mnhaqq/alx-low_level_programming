#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *argstostr - function that concatenates all arguments of a program
 *@ac: number of arguments
 *@av: arguments
 *Return: pointer to new string or null
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, n;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = k = n = 0; k < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		n += j + 1;
	}
	n++;
	s = malloc(n);
	if (s == NULL)
		return (NULL);

	for (i = k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	return (s);
}
