#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum.
 * @max: maximum.
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL.
 * If malloc fails, return NUL.
*/

int *array_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
