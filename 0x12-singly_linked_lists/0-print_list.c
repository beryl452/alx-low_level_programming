#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h == null)
			printf("[0] (nil)\n");
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			h = h->next;
			c++;
		}
	}
	return (count);
}
