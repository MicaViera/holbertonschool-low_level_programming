#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
	char c;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
