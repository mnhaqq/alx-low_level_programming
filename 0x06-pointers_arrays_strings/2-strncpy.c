/**
 *_strncpy - function to copy one string to another
 *@dest: destination string
 *@src: source string
 *@n: max number of bytes
 *Return: pointer to resultind string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
