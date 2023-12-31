#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *@dest: destination.
 *@src: source.
 *@n: number of byte to  concatenates
 *
 * Return: destination.
*/

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
