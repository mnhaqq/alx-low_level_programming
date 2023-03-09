/**
 *factorial - function to compute the factorial of a number
 *@n: number
 *Return: factorial if n >= 0 else -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
