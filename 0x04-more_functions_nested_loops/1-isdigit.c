#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: character.
 *
 * Return: 1 for success.
*/

int	_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
