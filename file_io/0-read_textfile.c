#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Function tat reads a text file and prints it to POSIX stdout
 * @filename: File with the text to read.
 * @letters: Length of the file.
 * Return: The number of letters or 0 if the file can't be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t fdread, fdwrite;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	fdread = read(fd, buf, letters);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}
	fdwrite = write(STDOUT_FILENO, buf, fdread);
	free(buf);
	close(fd);

	if (fdwrite < 0)
		return (0);

	return ((ssize_t)fdwrite);
}
