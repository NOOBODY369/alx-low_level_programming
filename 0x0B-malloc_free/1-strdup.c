#include "main.h"

/**
 * _strlen - count len
 * @s: string to count
 *
 * Return: lenght.
*/

int	_strlen(char *s)
{
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

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
	unsigned int	i, len;
	char			*copy;

	i = 0;
	len = _strlen(str);
	if (!str)
		return (NULL);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
