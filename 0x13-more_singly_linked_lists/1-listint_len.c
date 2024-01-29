#include "lists.h"

/**
 *listint_len - function to return number of elements in linked list
 *@h: head node
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
