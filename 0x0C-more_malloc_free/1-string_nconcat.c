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
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: n byte from s2.
 *
 * Return: pointer to the concatenated string.
*/

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;
	char			*str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	str = malloc((len1 + n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str[i + len1] = s2[i];
		i++;
	}
	str[i + len1] = '\0';
	return (str);
}
