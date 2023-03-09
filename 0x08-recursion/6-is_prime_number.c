int prime_number(int, int);

/**
 *is_prime_number - function to check for prime number
 *@n: number
 *Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	return (prime_number(n, n / 2));
}

/**
 *prime_number - actual implementation of check for prime number
 *@n: number
 *@i: half of n
 *Return: 1 if prime and 0 if not
 */

int prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (prime_number(n, i - 1));
}
