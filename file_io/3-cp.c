#include "main.h"
/**
 * main - Function that copies a file to another file.
 * @argc: The number of arguments.
 * @argv: The arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int ffrom, fto;
	ssize_t lread, lwrite;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fto < 0)
		fto = open(argv[2], O_TRUNC | O_WRONLY);
	if (fto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (lread)
	{
		lread = read(ffrom, buff, 1024);
		if (lread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		lwrite = write(fto, buff, lread);
		if (lwrite == -1 || lwrite != lread)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(ffrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom), exit(100);
	if (close(fto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto), exit(100);
	return (0);
}
