#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Is a function that frees a list_t list.
 * @head: Is a pointer to the first node.
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
			free(head->str);

		free(head);
	}
}

