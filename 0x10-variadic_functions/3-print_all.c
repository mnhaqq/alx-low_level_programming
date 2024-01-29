#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - function to print anything
 *@format: list of argument types passed to function
 */
void print_all(const char * const format, ...)
{
	char *s, *casted_format;
	int length, i = 0;
	va_list args;

	va_start(args, format);
	casted_format = (char *)format;
	length = _strlen(casted_format);

	while (i < length)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s)
			{
				printf("%s", s);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		     format[i] == 'f' || format[i] == 's') && (i != length - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
