#include "lists.h"

/**
 * dlistint_len -returns the number of elements in a linked dlistint_t list.
 *
 * @h: pointer to dlistint_t
 *
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;

	if (!h)
		return (0);

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
