#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Function that returns the nth of a dlistint_t list.
 * @head: Pointer to the first node.
 * @index: The node data.
 * Return: The nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	if (head)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while (head != NULL)
	{
		if (count == index)
		{
			break;
		}
		head = head->next;
		count++;
	}
	return (head);
}

