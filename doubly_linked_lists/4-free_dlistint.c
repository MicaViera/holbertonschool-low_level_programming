#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Is a function that frees a dlistint_t list.
 * @head: The first node.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
	else
		return;
}

