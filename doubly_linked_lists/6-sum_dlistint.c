#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - Function that returns the sum of all the data of a dlistint.
 * @head: Pointer to the first node.
 * Return: the sum of n data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	if (head)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

