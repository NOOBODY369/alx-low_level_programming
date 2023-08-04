#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
*/

unsigned int	binary_to_uint(const char *b)
{
	unsigned int	sum;
	int				i;

	sum = 0;
	i = 0;
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = (sum << 1) + (b[i] - '0');
			i++;
		}
		return (sum);
	}
}
