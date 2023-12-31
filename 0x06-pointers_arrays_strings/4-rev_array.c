#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: integer.
 *@n: is the number of elements of the array
 *
 * Return: void.
*/

void	reverse_array(int *a, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = n - 1;
	tmp = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
