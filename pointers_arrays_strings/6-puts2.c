#include "main.h"
/**
 * puts2 - prints every other character od the string.
 * @str: string content.
 */
void puts2(char *str)
{
	int l = 0;
	int p;

	while (str[l] != '\0')
		l++;

	for (p = 0; p < l; p += 2)
		_putchar(str[p]);

	_putchar('\n');
}
