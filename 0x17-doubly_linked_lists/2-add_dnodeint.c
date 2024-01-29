#include "lists.h"

/**
 * add_dnodeint - function to add a node to beginning of linked list
 * @head: pointer to pointer to first node
 * @n: data in new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
