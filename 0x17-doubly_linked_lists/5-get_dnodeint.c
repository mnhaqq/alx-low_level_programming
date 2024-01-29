#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at an index in a linked list
 * @head: pointer to head node
 * @index: index of node to be return
 * Return: node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
