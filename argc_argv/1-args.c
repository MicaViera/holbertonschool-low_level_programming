#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument counter.
 * @argv: rgument value.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
