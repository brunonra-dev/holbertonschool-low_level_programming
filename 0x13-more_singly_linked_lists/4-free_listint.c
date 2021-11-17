#include "lists.h"

/**
 * free_listint - free linked list
 *
 * @head: pointer to list_t
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
