#include "lists.h"

/**
 *sum_listint - function to return sum of all data(n) of a lined list
 *@head: head node
 *Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		n += ptr->n;
		ptr = ptr->next;
	}
	return (n);
}
