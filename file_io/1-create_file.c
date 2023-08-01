#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Function that creates a file.
 * @filename: Is the file.
 * @text_content: Content of the file.
 * Return: Created file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	for (count = 0; text_content[count] != '\0';)
		count++;

	write(fd, text_content, count);
	close(fd);
	return (1);
}
