#include "lists.h"

/**
 *reverse_listint - reverses a singly linked list
 *
 *@head: Pointer to head of the linked list
 *Return: The head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}