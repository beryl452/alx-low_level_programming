#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head of doubly linked list
 * @index: given index
 * Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
		if (i == index)
		{
			return (head);
		}
		i += 1;
	return (NULL);
}
