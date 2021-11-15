#include "lists.h"

/**
 * free_listint - free linked list
 *
 * @head: pointer to list_t
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
