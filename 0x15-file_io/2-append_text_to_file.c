#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: name of the file to be appended in.
 * @text_content: string to be added into filename's content.
 *
 * Return: 1 on success and -1 on failure
*/

int	append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	len;
	int	written;

	len = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		written = write(fd, text_content, len);
		if (written != len)
			return (-1);
	}
	close(fd);
	return (1);
}
