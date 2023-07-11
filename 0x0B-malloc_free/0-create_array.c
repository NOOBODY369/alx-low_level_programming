#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c:caracter
 *
 * Return: pointer to the array, or NULL if it fails.
*/

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char			*arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
