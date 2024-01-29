/**
 *_pow_recursion - function that returns x exponent y
 *@x: base
 *@y: exponent
 *Return: answer or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
