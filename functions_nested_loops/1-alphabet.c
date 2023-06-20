#include "main.h"
/**
 * print_alphabet - prints the alphabet.
 */
void print_alphabet(void)
{
	char letra = 97;

	for (letra = 97; letra <= 122; letra++)
		_putchar(letra);
	_putchar('\n');
}
