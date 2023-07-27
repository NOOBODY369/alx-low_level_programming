#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t
 * list.
 * @h: pointer to the head of list.
 *
 * Return: number of node.
*/

size_t	print_list(const list_t *h)
{
	size_t	size;

	size = 0;
	while (h)
	{
		if (!h->s)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->s);
		h = h->next;
		size++;
	}
	return (size);
}
