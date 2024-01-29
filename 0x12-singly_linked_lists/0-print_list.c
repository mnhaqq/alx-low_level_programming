#include "lists.h"

/**
 *print_list - funtion that prints all elements of a list_t list
 *@h: pointer to list_t
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
