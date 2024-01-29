#include "lists.h"

/**
 *pop_listint - function to delete head node of list
 *@head: pinter to head node
 *Return: value n in head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
