#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: string sep.
 * @n: n elements.
 *
 * Return: void.
*/

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	char			*p;
	va_list			args;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i != 0)
		printf("%s", separator);
		p = va_arg(args, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(args);
}
