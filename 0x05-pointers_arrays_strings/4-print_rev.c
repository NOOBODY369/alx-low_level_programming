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
	i = len - 1;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
		len++;
	}
	_putchar('\n');
}
