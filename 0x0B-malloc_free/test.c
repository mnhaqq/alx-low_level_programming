#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "       ALX     school            ";
	char *nstr;
	int i, j, n;

	for (i = 0; str[i] == ' '; i++)
		;
	for (n = 0; str[i] != '\0'; i++, n++)
	{
		if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			n--;
	}
	n++;
	nstr = malloc(n);

	for (j = 0; str[j] == ' '; j++)
	 	;

	for (i = 0; i < n; j++)
	{
	 	if (str[j] == ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
	 		continue;

	 	nstr[i] = str[j];
	 	i++;
	 }

	printf("length of string is %i\n", n);
	printf("Original string is %s\n", str);
	printf("New string is %s\n", nstr);
	return (0);
}
