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
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
