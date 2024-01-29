#include <stdio.h>
#include <stdlib.h>

/**
 *main - function to print the product of 2 ints passed as command line args
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0 if success 1 if wrong cl args passed
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
