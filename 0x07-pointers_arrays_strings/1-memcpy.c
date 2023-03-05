/**
 *_memcpy - function that copies memory area
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (short) n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
