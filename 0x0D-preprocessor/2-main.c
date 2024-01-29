#include <stdio.h>

/**
 *main - function to print name of file program is compiled from
 *Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
