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
 * str_concat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer point to a newly allocated space in memory
*/



char	*str_concat(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;
	char			*str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		str[i + len1] = s2[i];
		i++;
	}
	str[i + len1] = '\0';
	return (str);
}
