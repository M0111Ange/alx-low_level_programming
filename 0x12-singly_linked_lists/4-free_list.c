#include "lists.h"
#include <stdlib.h>

/**
 *free_list - frees the memory allocated to a singly linked list
 *@head: The head pointer of the list
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
