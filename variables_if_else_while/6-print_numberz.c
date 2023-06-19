#include <stdio.h>
/**
 * main - prints all the single numbers of base 10 starting from 0.
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
