#include "main.h"
/**
 * more_numbers - Function that prints the numbers from 0 to 14 followed by \n
 */
void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 >= 10)
			{
				_putchar((num2 / 10) + '0');
			}
			_putchar((num2 % 10) + '0');
		}
		_putchar('\n');
	}
}
