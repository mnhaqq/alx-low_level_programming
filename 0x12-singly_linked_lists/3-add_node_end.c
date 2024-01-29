#include "lists.h"

/**
 *add_node_end - function to add node to the end f a linked list
 *@head: head node
 *@str: string of new node
 *Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	ptr = new = malloc(sizeof(list_t));
	if (ptr == NULL || new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
		{
			free(ptr);
			free(new);
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	return (new);
}
