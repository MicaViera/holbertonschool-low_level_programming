#include "main.h"
/**
 * *_strcpy - A function that copies the string pointed.
 *@dest: destination buffer.
 *@src: the string to be copied.
 *Return: destination of the copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int copy;

	for (copy = 0; src[copy] != '\0'; copy++)
	{
		dest[copy] = src[copy];
	}
	dest[copy++] = '\0';
	return (dest);
}
