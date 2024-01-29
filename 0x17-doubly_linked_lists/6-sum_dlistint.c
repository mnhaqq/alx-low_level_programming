#include "lists.h"

/**
 * sum_dlistint - function to get sum of all data in linked list
 * @head: pointer to head node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum_n = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum_n += ptr->n;
		ptr = ptr->next;
	}
	return (sum_n);
}
