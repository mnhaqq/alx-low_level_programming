#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - function to perform operation on cl args
 *@argc: nmber of arguments
 *@argv: command line arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int answer;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = (*op)(num1, num2);
	printf("%d\n", answer);

	return (0);
}
