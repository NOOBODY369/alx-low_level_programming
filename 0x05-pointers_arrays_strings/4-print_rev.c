#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 *				followed by a new line.
 *@s: where we store the string.
 *
 * Return: void.
 */

void	print_rev(char *s)
{
	int	len;
	int	i;

	len = 0;
	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
