#include "lists.h"

/**
 * add_dnodeint -adds a new node at the beginning of a dlistint_t list.
 *
 * @n: num of new node
 * @head: pointer to dlistint_t
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (*head == NULL)
	{
		node->next = *head;
		node->prev = NULL;
		*head = node;
		return (*head);
	}

	node->next = *head;
	node->prev = (*head)->prev;
	(*head)->prev = node;
	*head = node;

	return (*head);
}
