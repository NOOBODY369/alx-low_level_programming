#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array.
 * @size: size of the array.
 * @cmp: pointer to function.
 *
 * Return:eturns the index of the first element
 * for which the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
*/

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	index;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (index == 0; index < size; index++)
	{
		if (cmp(array[index]) == 1)
			return (index);
	}
	return (-1);
}
