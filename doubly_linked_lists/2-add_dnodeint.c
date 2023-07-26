#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Function that adds a new node at the beginning of dlistint_t.
 * @head: Pointer to a pointer that contains the adress of head.
 * @n: data of a int in the node.
 * Return: The new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhnode;

	if (!head)
		return (0);

	newhnode = malloc(sizeof(dlistint_t));

	if (!newhnode)
	{
		free(newhnode);
		return (NULL);
	}

	newhnode->n = n;
	newhnode->next = *head;
	newhnode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newhnode;
	}

	*head = newhnode;
	return (newhnode);
}

