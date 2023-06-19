#include <stdio.h>
/**
 * main - print all the lowercase alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	char rev = 122;

	for (rev = 122; rev >= 97; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
