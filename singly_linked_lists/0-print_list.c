#include "lists.h"
#include <stdio.h>
/**
 * print_list - is a function that prints all the elements of a list_t.
 * @h: Is a pointer to the list_t structure.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int numnodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
