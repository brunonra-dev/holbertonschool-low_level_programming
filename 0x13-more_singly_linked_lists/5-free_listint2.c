#include "lists.h"

/**
 * free_listint2 - free linked list
 *
 * @head: pointer to list_t
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}

	head = NULL;
}
