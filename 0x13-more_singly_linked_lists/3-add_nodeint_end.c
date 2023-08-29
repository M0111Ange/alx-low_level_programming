#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - Adds a new node to the end of a singly linked list
 *@n: Integer to be placed int the list
 *@head: Pointer to head of list
 *Return: The address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}