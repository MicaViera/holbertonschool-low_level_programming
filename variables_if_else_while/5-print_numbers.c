#include <stdio.h>
/**
 * main - Prints all single digits numbers of base 10 starting from 0.
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
