#include "main.h"

/**
 * get_bit - function that returns
 * the value of a bit at a given index.
 * @n: long int.
 * @index: start point.
 *
 * Return: the value of the bit at index
 * index or -1 if an error occured
*/

int	get_bit(unsigned long int n, unsigned int index)
{
	int	bit_size;
	int	bit;

	bit_size = sizeof(unsigned long int) * 8;
	bit = (n >> index) & 1;
	if (index >= bit_size)
		return (-1);
	else
		return (bit);
}
