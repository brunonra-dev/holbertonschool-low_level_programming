#include "lists.h"

/**
 * print_listint - print linked list
 *
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb_node = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");

		numb_node += 1;
		h = h->next;
	}

	return (numb_node);
}
