#include "lists.h"

/**
 *free_listint - free linked list
 *@head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
