#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - Places a new node a specified index
 *
 *@head: The head of the linked list
 *@idx: index at which new node will be added
 *@n: data in new node
 *Return: returns the address of the new node or NULL id unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *ptr = *head, *tmp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}
	while (ptr != NULL)
	{
		if (i == (idx - 1))
		{
			tmp = ptr->next;
			ptr->next = new;
			new->next = tmp;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}