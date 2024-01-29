#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_numbers - function that prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers to be passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
			if (i != n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
