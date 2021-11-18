#include "lists.h"

/**
 * delete_nodeint_at_index - delete a new node at a given position
 *
 * @head: pointer to list_t
 * @index:  is the index of the node
 *
 * Return: nth node of a listint_t linked list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *prev;
	unsigned int idx_node = 1;

	if (!tmp)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && idx_node < index - 1)
	{
		tmp = tmp->next;
		idx_node++;
	}

	if (!tmp || !(tmp->next))
		return (-1);

	prev = tmp->next;
	tmp->next = prev->next;

	free(prev);
	return (1);
}
