/**
 *_strspn - function to get length of a prefix substring
 *@s: string
 *@accept: substring
 *Return: number of bytes in s containing characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, span;

	for (i = span = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
			if (accept[i] == s[j])
			{
				span++;
				break;
			}
	}
	span++;
	return (span);
}
