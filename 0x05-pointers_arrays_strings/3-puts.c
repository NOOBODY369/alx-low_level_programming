#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string.
 *
 * Return: void.
*/

void	_puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');

}
