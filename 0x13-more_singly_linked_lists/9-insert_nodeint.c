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
	listint_t *tmp, *new_node;
	unsigned int idx_node = 1;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (idx_node < idx)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			free(new_node);
			return (NULL);
		}
		idx_node++;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
