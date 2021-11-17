#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to list_t
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (!head)
		return (0);

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
