#include "main.h"
#include <stdio.h>
/**
 * main - Function that prints the number of arguments.
 * @argc: The arguments.
 * @argv: The arguments value.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
