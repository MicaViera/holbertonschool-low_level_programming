#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: The array.
 * @size_t: The size of the array.
 * @value: The value to search.
 * Return: The value searched and -1 on failure.
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array)
    {
        return (-1);
    }
    for (; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (value == array[i])
        {
            return (i);
        }
    }
    return (-1);
}
