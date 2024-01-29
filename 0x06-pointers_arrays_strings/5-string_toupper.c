/**
 *string_toupper - change lowercase characters to uppercase
 *@s: string
 *Return: pointer to uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) > 96 && *(s + i) < 123)
			*(s + i) -= 32;
	}
	return (s);
}
