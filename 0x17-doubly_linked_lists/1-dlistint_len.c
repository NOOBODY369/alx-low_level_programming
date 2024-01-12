#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: head of list.
 *
 * Return: the number of elements in
 * a linked list.
*/

size_t	dlistint_len(const dlistint_t *h)
{
	const dlistint_t	*nd;
	size_t				count;

	nd = h;
	count = 0;
	while (nd)
	{
		count++;
		nd = nd->next;
	}
	return (count);
}
