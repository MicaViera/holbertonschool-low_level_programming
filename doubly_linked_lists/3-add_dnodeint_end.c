#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Function that adds a new node at the end of dlistint_t.
 * @head: Pointer to a pointer that holds de First node.
 * @n: The data inside the nodes.
 * Return: The new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newenode, *tmp;

	if (!head)
		return (NULL);

	newenode = malloc(sizeof(dlistint_t));

	if (!newenode)
	{
		free(newenode);
		return (NULL);
	}
	newenode->n = n;
	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newenode;
	}
	else
		*head = newenode;

	newenode->next = NULL;
	newenode->prev = tmp;
	return (newenode);
}

