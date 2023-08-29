#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a singly linked list of type listint_t
 *
 *@head: Head of singly linked list
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}