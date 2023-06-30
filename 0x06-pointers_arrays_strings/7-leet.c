#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *@str: string to work on.
 *
 * Return: the result.
*/

char	*leet(char *str)
{
	int		i;
	int		j;
	char	*c;
	char	*s;

	c = "aAeEoOtTlL";
	s = "4433007711";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
				str[i] = s[j];
		}
	}
	return (str);
}
