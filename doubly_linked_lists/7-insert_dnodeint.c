#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts newnode in a given position
 * @h: array.
 * @idx: The position where the node is going to be incerted.
 * @n: the data of the node.
 * Return: The adress where is going to be the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *nNode, *tmp;

	tmp = *h;
	nNode = malloc(sizeof(dlistint_t));
	if (!nNode)
		return (NULL);

	if (idx == 0)
	{
		nNode->next = tmp;
		nNode->n = n;
		nNode->prev = NULL;
		if (tmp != NULL)
			tmp->prev = nNode;
		*h = nNode;
		return (nNode);
	}

	while (count != idx)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		count++;
	}

	nNode->next = tmp->next;
	nNode->n = n;
	nNode->prev = tmp;
	tmp->next = nNode;

	if (nNode->next == NULL)
		return (nNode);

	tmp = tmp->next;
	tmp->prev = nNode;

	return (nNode);
}
