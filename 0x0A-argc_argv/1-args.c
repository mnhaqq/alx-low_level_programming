#include <stdio.h>

/**
 *main - function to print number for cl args
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (*argv[0] == '\0')
		printf("0");
	else
		printf("%i\n", argc - 1);
	return (0);
}
