#include "lists.h"

/**
 * free_list - free a linked list
 * @head: linked list
 */
void free_list(list_t *head)
{	
	list_t *tmp;
	
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			tmp = head;
			free(tmp->str);
			free(tmp);
		}
	}
}
