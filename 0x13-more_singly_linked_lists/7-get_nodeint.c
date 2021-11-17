#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to list_t
 * @index:  is the index of the node
 *
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);
}
