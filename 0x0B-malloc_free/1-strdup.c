#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory which contains a copy of
 * the string given as a parameter.
 * @str: string
 *
 * Return: pointer to a newly allocated space in memory
*/

char	*_strdup(char *str)
{
	int		i, len;
	char	*copy;

	len = 0;
	if (str == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
