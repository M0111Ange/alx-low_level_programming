#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees a singly linked list of type listint_t
 *
 *@head: Head of singly linked list
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}