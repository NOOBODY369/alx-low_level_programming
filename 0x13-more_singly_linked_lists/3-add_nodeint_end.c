#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: head of list.
 * @n: node to add as int.
 *
 * Return: the address of the new element,
 * or NULL if it failed.
*/

listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new;
	listint_t	*tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}
	tmp = (*head);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
