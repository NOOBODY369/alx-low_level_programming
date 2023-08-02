#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of list.
 *
 * Return: void.
*/

void	free_listint2(listint_t **head)
{
	listint_t	*new;

	new = NULL;
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
}
