#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head: n list to free.
 *
 * Return: void.
*/

void	free_list(list_t *head)
{
	list_t	*tmp;

	while (head)
	{
		tmp = head->next;
		free(head->s);
		free(head);
		head = tmp;
	}
}
