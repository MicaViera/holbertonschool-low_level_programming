#include "function_pointers.h"
/**
 * int_index - Is a function that searches for an integer.
 * @array: Is a pointer to a string.
 * @size: Is the variable size of the function.
 * @cmp: Is a pointer to a function.
 * Return: -1 if no elements matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int box;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	for (box = 0; box <= size; box++)
	{
		if (cmp(array[box]) != 0)
			return (box);
	}
	return (-1);
}
