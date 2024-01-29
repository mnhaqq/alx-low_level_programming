#include "lists.h"

/**
 *add_nodeint - function to add node to the beginning of listint_t list
 *@head: pointer to head
 *@n: number in new node
 *Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
