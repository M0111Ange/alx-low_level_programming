#include "lists.h"

/**
 *sum_listint - return the sum of all the data in a listint_t
 *
 *@head: The head of the linked list
 *Return: returns the sum of all the integers, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}