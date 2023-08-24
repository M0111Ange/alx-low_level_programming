#include "lists.h"

/**
 *list_len - finds the length of a singly linked list
 *
 *@h: A list of type list_t
 *Return: the number of list items size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
