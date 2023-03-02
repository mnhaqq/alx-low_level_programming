/**
 *_strncat - function to append one string to another
 *@dest: destination string
 *@src: source string
 *@n: number of bytes
 *Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		*(dest + i) = *(src + j);

	if (j < n)
		*(dest + i) = '\0';
	return (dest);
}
