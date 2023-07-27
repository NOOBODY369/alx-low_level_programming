#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of
 * a list_t list.
 * @head: first node adress:
 * @str: string adress
 *
 * Return: the address of the new element, or NULL if it failed.
*/

list_t	*add_node_end(list_t **head, const char *str)
{
	unsigned int	lenth;
	list_t			*tmp1;
	list_t			*tmp2;

	lenth = 0;
	if (str == NULL)
		return (NULL);
	tmp1 = malloc(sizeof(list_t));
	if (tmp1 == NULL)
		return (NULL);
	tmp1->s = strdup(str);
	if (tmp1->s == NULL)
	{
		free(tmp1);
		return (NULL);
	}
	while (str[lenth])
		lenth++;
	tmp1->len = lenth;
	tmp1->next = NULL;
	if (*head == NULL)
	{
		(*head) = tmp1;
		return (tmp1);
	}
	tmp2 = *head;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	return (tmp1);
}
