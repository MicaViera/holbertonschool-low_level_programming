#include "main.h"
/**
 * main - Fizz Buzz function.
 * Return: 0.
 */
int main(void)
{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (f % 3 == 0 && f % 5 == 0)
			printf("FizzBuzz");
		if (f % 3 == 0)
			printf("Fizz");
		if (f % 5 == 0)
			printf("Buzz");
		else
			printf("%d", f);
		if (f != 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
