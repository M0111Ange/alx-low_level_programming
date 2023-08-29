#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - removes a node from list at specified index
 *
 *@head: Pointer to head of linked list
 *@index: The index specified
 *Return: The integer stored as data of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL)
	{
		if (i == (index - 1))
		{
			temp = ptr->next;
			ptr->next = temp->next;
			free(temp);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}