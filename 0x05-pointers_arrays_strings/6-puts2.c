#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *			starting with the first character, followed by a new line.
 *@str: where we stored the string:
 *
 * Return: void.
 */

void	puts2(char *str)
{
	int	i;
	int	len;

	len = 0;
	while (str[i++])
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
