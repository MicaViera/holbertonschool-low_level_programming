#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: the file.
 * @text_content: the content to add at the file.
 * Return: 1 on succcess and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	if (fd < 0)
		return (-1);

	for (count = 0; text_content[count] != '\0';)
		count++;

	write(fd, text_content, count);
	close(fd);
	return (1);
}

