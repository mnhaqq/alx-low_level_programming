#include "lists.h"

/**
 * print_dlistint - function to print elements in doubly linked list
 * @h: head pointer
 * Return: number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n;
	const dlistint_t *ptr;

	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
