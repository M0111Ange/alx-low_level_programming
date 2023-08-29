#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - Deletes the first node of a linked list
 *
 *@head: Pointer to the head of the linked list
 *
 *Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}