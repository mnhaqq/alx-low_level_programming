/**
 *_isupper - function to check if character is uppercase
 *@c: character
 *Return: 1 if char is upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
