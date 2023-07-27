#include "lists.h"

/**
 * list_len - function that returns the number of elements in
 * a linked list_t list.
 * @h: pointer to head of list.
 *
 * Return: number of element.
*/

size_t	list_len(const list_t *h)
{
	unsigned int	count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
