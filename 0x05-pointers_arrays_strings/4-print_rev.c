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
	int	indx;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (indx = len - 1; indx >= 0; indx--)
		_putchar(s[indx]);
	_putchar('\n');
}
