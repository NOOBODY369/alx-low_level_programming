#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list.
 * @head: first node adress.
 * @str: string adress.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

list_t	*add_node(list_t **head, const char *str)
{
	unsigned int	lenth;
	list_t			*new;

	lenth = 0;
	while (str[lenth])
		lenth++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = lenth;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
