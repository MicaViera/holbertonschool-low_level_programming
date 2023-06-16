#include <stdio.h>
/**
 * main - print alphabet uppercase and lowercase.
 * Return: 0
 */
int main(void)
{
	char letra = 97;
	char LETRA = 65;

	for (letra = 97; letra <= 122; letra++)
		putchar(letra);
	for (LETRA = 65; LETRA <= 90; LETRA++)
		putchar(LETRA);
	putchar('\n');
	return (0);
}
