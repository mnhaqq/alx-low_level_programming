/**
 *_memset - function to fill a memory area with a constant byte
 *@s: memory area
 *@b: constant byte
 *@n: number of bytesin memory area
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (short) n; i++)
		*(s + i) = b;

	return (s);
}
