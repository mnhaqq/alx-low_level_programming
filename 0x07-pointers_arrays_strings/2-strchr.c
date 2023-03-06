/**
 *_strchr - function that locates first occurence of a character in a string
 *@s: string
 *@c: character to be found
 *Return: pointer to first occurence of @c in @s or null if @c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return ('\0');
}
