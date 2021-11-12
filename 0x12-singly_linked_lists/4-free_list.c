#include "lists.h"

/**
 * free_list - free linked list
 *
 * @head: pointer to list_t
 */

void free_list(list_t *head)
{
	while (head->next)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
