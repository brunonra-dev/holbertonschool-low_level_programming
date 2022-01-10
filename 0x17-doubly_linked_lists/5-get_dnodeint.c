#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @index: new node index
 * @head: pointer to dlistint_t
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		idx++;
		head = head->next;
	}

	return (NULL);
}
