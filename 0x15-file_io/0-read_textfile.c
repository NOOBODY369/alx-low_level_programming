#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of the file.
 * @letters: size of text.
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t	read_textfile(const char *filename, size_t letters)
{
	char	*buffer;
	ssize_t	readed;
	ssize_t	written;

	if (filename == NULL)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	readed = read(buffer, sizeof(char), letters);
	if (readed <= 0)
		free(buffer);
		return (0);
	written = write(STDOUT_FILENO, buffer, readed);
	if (written != readed)
		free(buffer);
		return (0);
	free(buffer);
	return (written);
}
