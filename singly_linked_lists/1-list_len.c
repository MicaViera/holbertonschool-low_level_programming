#include "lists.h"
/**
 * list_len - Function that returns the number elements in linked list_t list.
 * @h: Pointer to the list_t structure.
 * Return: The number of elements of the list_t.
 */
size_t list_len(const list_t *h)
{
	unsigned int num_elem = 0;

	while (h)
	{
		if (!h)
			return (0);

		else if (h != NULL)
		{
			num_elem++;
			h = h->next;
		}
	}
	return (num_elem);
}

