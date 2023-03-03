/**
 *leet - fxn that encodes a string in leetcode
 *@s: string
 *Return: pointer to s
 */

char *leet(char *s)
{
	int i, j;
	char alphabets[] = "AEOTL";
	char encoded[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabets[j] != '\0'; j++)
		{
			if (s[i] == alphabets[j] || s[i] - 32 == alphabets[j])
				*(s + i) = *(encoded + j);
		}
	}
	return (s);
}
