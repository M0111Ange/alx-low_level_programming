#include "lists.h"

/**
 *get_nodeint_at_index - retuns an integer at a certain index
 *
 *@index: The index position specified
 *@head: the head of the singly linked list
 *Return: A pointer to the specified node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}