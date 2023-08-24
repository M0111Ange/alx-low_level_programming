#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_list - print the contents of a singly lists
 *
 *@h: A list_t list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	unsigned int n;
	char *s;

	while (h != NULL)
	{
		n = h->str ? h->len : 0;
		s = h->str ? h->str : "(nil)";
		printf("[%d] %s\n", n, s);
		h = h->next;
		i++;
	}
	return (i);
}
