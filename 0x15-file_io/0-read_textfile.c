#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 *                 it to the POSIX standard output
 * @filename: the name of the file
 * @letters: no. of printed letters
 * Return: number of printed letters. return the value o if it fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(fd);

	free(buffer);

	return (nread);
}
