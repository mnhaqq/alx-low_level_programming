#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at index in linked list
 * @head: pointer to pointer to head node
 * @index: index to delete node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr, *prev = NULL;

	ptr = *head;
	while (ptr != NULL)
	{
		if (i == index)
		{
			if (prev != NULL)
				prev->next = ptr->next;
			else
				*head = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = prev;
			free(ptr);
			return (1);
		}
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
