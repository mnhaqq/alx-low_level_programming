#include "lists.h"

/**
 *insert_nodeint_at_index - function to insert a node at a specific index
 *@head: pointer to head node
 *@idx: index to add new node
 *@n: value in new node
 *Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *new, *prev;

	ptr = *head;
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(listint_t));
		ptr->n = n;
		ptr->next = NULL;
		return (ptr);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (ptr != NULL)
	{
		if (i == idx)
		{
			new->next = ptr;
			prev->next = new;
			return (new);
		}
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
	free(new);
	return (NULL);
}
