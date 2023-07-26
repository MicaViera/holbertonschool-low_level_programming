#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Pointer to a node.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int numnodes = 0;

	if (!h)
		return (0);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}

