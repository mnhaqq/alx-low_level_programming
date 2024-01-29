#include "lists.h"

/**
 *get_nodeint_at_index - function to return nth node of listint_t list
 *@head: head node
 *@index: index of nth node
 *Return: nth node if found else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (index == n)
			return (ptr);
		ptr = ptr->next;
		n++;
	}
	return (NULL);
}
