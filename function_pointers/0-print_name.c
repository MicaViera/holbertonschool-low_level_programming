#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Is a function that prints a name.
 * @name: value to print.
 * @f: pointer to a function.
 * @char *: pointer to a char variable.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
