#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 * @head: head of list.
 * @index:  index of the node.
 *
 * Return: NULL if the node does not exist.
*/

dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
