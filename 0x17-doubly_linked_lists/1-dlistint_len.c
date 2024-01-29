#include "lists.h"

/**
 * dlistint_len - function to return number of elements in doubly linked list
 * @h: head pointer
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n;
	const dlistint_t *ptr;

	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
