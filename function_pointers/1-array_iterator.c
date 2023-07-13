#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Is a function that executes a function.
 * @array: variable.
 * @size: size of the function.
 * @action: pointer to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int box;

	if (!array || !action)
		return;

	for (box = 0; box < size; box++)
		action(array[box]);
}
