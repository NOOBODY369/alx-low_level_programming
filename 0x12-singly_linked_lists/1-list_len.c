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
	const list_t	*tmp;
	unsigned int	count;

	count = 0;
	tmp = h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
