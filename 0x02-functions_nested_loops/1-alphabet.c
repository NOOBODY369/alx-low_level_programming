#include "main.h"

/**
 * print_alphabet - printing alphabet
 *
 * Return : always 0.
*/

void print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
