#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index in a linked list
 * @h: pointer to pointer to head node
 * @idx: index to insert node
 * @n: data in new node
 * Return: pointer to new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr = *h, *new = malloc(sizeof(dlistint_t)), *prev = NULL;

	if (*h == NULL)
	{
		ptr = malloc(sizeof(dlistint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->prev = ptr->next = NULL;
		*h = ptr;
		return (ptr);
	}
	if (new == NULL) /* malloc check for new node initialized earlier */
		return (NULL);
	new->n = n;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			new->next = ptr;
			new->prev = prev;
			ptr->prev = new;
			if (prev != NULL)
				prev->next = new;
			else
				*h = new;
			return (new);
		}
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
	if (i == idx)
	{
		new->next = NULL, new->prev = prev;
		prev->next = new;
		return (new);
	}
	return (NULL);
}
