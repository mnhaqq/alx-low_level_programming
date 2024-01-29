#include <stdlib.h>

/**
 * print_name - function to print sentence unto terminal
 * @name: name to attach to end of sentence
 * @f: pointer to function controlling format of name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
