int _sqrt(int, int);
/**
 *_sqrt_recursion - function thatreturn square root of a number
 *@n: number
 *Return: square root or -1 if n is not a perfect square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - actual implementation of square root
 *@n: number
 *@i: 0<i<n
 *Return: same as above
 */

int _sqrt(int n, int i)
{
	if (n == 0)
		return (0);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
