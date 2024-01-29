/**
 *_strspn - function to get length of a prefix substring
 *@s: string
 *@accept: substring
 *Return: number of bytes in s containing characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, char_check, len_accept;
	unsigned int span;

	/* find length of *accept */
	for (len_accept = 0; accept[len_accept] != '\0'; len_accept++)
		;

	for (i = 0; s[i] != '\0'; i++)
	{
		char_check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
				char_check += 1;
			else
				break;
		}
		if (char_check == len_accept)
			break;
	}
	span = i;

	return (span);
}
