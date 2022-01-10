#include "lists.h"

/**
 * print_dlistint -prints all the elements of a dlistint_t list.
 *
 * @h: pointer to dlistint_t
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
