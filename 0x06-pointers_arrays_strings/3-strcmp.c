/**
 *_strcmp - compare two strings
 *@s1: first string
 *@s2: second string
 *Return: int comp
 */

int _strcmp(char *s1, char *s2)
{
	int i, string1, string2, comp;

	for (i = string1 = string2 = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			string1 += 1;
		else if (s1[i] < s2[i])
			string2 += 1;
	}

	if (string1 > string2)
		comp = 1;
	else if (string1 < string2)
		comp = -1;
	else
		comp = 0;

	return (comp);
}
