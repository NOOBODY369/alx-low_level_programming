#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: where the string is stored.
 *
 * Return: void
*/

void	rev_string(char *s)
{
	int		i;
	int		len;
	char	tmp;

	i = -1;
	len = 0;
	tmp = s[i];
	while (s[len])
		len++;
	while (++i < --len)
	{
		s[i] = s[len];
		s[len] = tmp;
	}

}

