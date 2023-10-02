#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file.
 * @text_content: text content.
 *
 * Return: if filename is NULL return -1
 * if text_content is NULL create an empty file.
*/

int	create_file(const char *filename, char *text_content)
{
	int	fd;
	int	len;
	int	written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
		written = write(fd, text_content, len);
		if (written < 0)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
