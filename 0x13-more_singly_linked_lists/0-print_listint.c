#include "lists.h"

/**
 *print_listint - function to print all elements of listint_t list
 *@h: head node
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
