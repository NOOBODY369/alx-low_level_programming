#include "main.h"

/**
 * _strlen - returns the length of a string.
.*@s: integer.
* Return: Length of @s in bytes, not including null terminator.
*/

int	_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
