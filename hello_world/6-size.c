#include <stdio.h>

/**
 *main - printf - gcc
 *Return: 0
 */

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongintType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu  bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
