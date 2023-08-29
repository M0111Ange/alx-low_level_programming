#include "lists.h"

/**
 *listint_len - finds the length of a singly linked list
 *
 *@h: The head of linked list
 *Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}