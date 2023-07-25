#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: The first node.
 * @str: The string.
 * Return: adress of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode, *tmp;

	if (!str)
		return (NULL);

	endnode = malloc(sizeof(list_t));

	if (!endnode)
	{
		free(endnode);
		return (NULL);
	}

	endnode->str = strdup(str);
	endnode->len = strlen(str);
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = endnode;
	return (endnode);
}
