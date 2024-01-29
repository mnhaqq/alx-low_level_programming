/**
 *_strcat - function to append one string to another
 *@dest: destination string
 *@src: source string
 *Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++, i++)
		*(dest + i) = *(src + j);

	*(dest + i) = '\0';
	return (dest);
}
