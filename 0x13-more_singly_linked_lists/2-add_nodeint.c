#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - Adds a new node to the begining of list
 *
 *@head: Pointer to head of the linked list
 *@n: Integer to be placed in list
 *Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}