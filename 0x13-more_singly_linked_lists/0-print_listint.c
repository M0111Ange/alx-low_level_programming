#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints the all the nodes of a llinked list
 *@h: pointer head of singly linked list
 *Return: An integer of the number of nodes present
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
