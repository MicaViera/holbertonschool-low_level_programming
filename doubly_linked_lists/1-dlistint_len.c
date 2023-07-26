#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Function that returns number elements in a linked dlistint_t.
 * @h: Is the pointer to a node.
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sumelem = 0;

	if (!h)
		return (0);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h)
	{
		if (h != NULL)
			sumelem++;
		h = h->next;
	}
	return (sumelem);
}

