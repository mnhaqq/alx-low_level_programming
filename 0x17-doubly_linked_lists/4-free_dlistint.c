#include "lists.h"

/**
 *free_dlistint - function to free a linked list
 *@head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
