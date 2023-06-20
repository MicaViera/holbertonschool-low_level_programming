#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times.
 */
void print_alphabet_x10(void)
{
	int count, letter;

	for (count = 0; count <= 9; count++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
