#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line.
 *
 * Return: void.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void	_puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
