#include <stdio.h>
/**
 * main - print the entire alphabet
 *Return: 0
 */

int main(void)
{
	char letra = 97;

	for (letra = 97; letra <= 122; letra++)
		putchar(letra);
	putchar('\n');
	return (0);
}
