#include "main.h"

/**
 * print_alphabet_x10 - printing alpha 10 times.
 *
 * Return: alyaws 0.
*/

void print_alphabet_x10(void)
{
	char	c;
	int		counter;

	counter = 0;
	while (counter++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
