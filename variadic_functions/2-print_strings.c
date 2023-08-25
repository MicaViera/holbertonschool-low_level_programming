#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings
 * @separator: String to be printed
 * @n: Number of sting to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int iter;
	char *str;

	va_start(list, n);
	for (iter = 0; iter < n; iter++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && iter == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}
