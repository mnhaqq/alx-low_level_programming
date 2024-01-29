#include <stdio.h>

/**
 *main - function that prints name of program
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
