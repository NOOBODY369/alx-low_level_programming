#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a
 * dlistint_t list.
 * @h: head of list.
 *
 * Return: the number of nodes
*/

size_t	print_dlistint(const dlistint_t *h)
{
	const dlistint_t	*nd;
	size_t				count;

	nd = h;
	count = 0;
	while (nd)
	{
		printf("%i\n", nd->n);
		count++;
		nd = nd->next;
	}
	return (count);
}
