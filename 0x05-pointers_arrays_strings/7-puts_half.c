#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: where the sting is stored.
 *
 * Return: void.
*/

void puts_half(char *str)
{
	int	i;
	int	indx;
	int	len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	if ((len % 2) == 0)
		indx = len / 2;
	else
		indx = (len + 1) / 2;
	for (i = indx; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
