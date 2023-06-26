#include "main.h"
/**
 * puts_half - prints half of a string followed by anew line.
 * @str: string content.
 */
void puts_half(char *str)
{
	int count = 0, l = 0;
	int n;

	while (str[l] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (l = n; l < count; l++)
		_putchar(str[l]);

	_putchar('\n');
}
