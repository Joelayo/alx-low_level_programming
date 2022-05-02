#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard wd
 * @filename: Pointer to the name of the file
 * @letters: Number of letters it should read and print
 * Return:The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd = 0, fd = 0, wd = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wd = write(STDOUT_FILENO, buffer, rd);
	if (wd == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (wd);
}
