#include "lists.h"

/**
 *add_nodeint_end - add new node to the ind of listint_t list
 *@head: pointer to head node
 *@n: number in new node
 *Return: pointer to new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	ptr = new = malloc(sizeof(listint_t));
	if (ptr == NULL || new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			free(ptr);
			free(new);
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	new->n = n;
	new->next = NULL;

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
