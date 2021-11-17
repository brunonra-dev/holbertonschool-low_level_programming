#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to list_t
 * @idx:  is the index of the node
 * @n: int to new node
 *
 * Return: nth node of a listint_t linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node, *past_node;
	unsigned int idx_node = 0;

	if (!head)
		return (NULL);

	tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	while (!(idx == idx_node))
	{
		if ((idx - 1) == idx_node)
			past_node = tmp;
		tmp = tmp->next;
		idx_node++;
	}

	past_node->next = new_node;
	new_node->next = tmp;

	return (tmp);
}
