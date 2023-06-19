#include <stdio.h>
/**
 * main - print the alphabet in lowercase except q and e.
 * Return: 0
 */
int main(void)
{
	char letra = 97;

	for (letra = 97; letra <= 122; letra++)
	{
		if (letra != 101 && letra != 113)
			putchar(letra);
	}
	putchar('\n');
	return (0);
}
