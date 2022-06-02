#include "main.h"

/**
 * append_text_to_file - a function that appends a text to the end of a file
 * @filename: represents the filename
 * @text_content: represents the text to be added on
 * Return: the value 1 if the file exists, the value of -1 if the file fails
 *         or does not exists
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int newlet;
	int rwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (newlet = 0; text_content[newlet]; newlet++)
			;

		rwrite = write(fd, text_content, newlet);

		if (rwrite == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
