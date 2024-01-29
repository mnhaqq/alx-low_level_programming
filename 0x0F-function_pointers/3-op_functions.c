#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - function to add 2 integers
 *@a: first integer
 *@b: second integer
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function to subtract 2 integers
 *@a: first integer
 *@b: second integer
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function to multiply 2 integers
 *@a: first integer
 *@b: second integer
 *Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function to divide 2 integers
 *@a: first integer
 *@b: second integer
 *Return: quotient
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 *op_mod - function to perform modulo operator on 2 integers
 *@a: first integer
 *@b: second integer
 *Return: modulo
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
