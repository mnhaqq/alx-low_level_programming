#include "lists.h"

/**
 *list_len - funtion that returns number of elements of a linked list_t list
 *@h: pointer to list_t
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
