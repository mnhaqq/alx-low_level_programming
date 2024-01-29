#include "lists.h"

/**
 * add_dnodeint_end - add node to end of linked list
 * @head: pointer to pointer to head node
 * @n: number in nw node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
